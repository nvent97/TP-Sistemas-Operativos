#include"insert.h"

void qinsert(char *table, char* key, char *value, char* timeStamp){
	log_info(logger, "  Chequeo que la tabla este creada");
	if(fs_tableExists(table)){
		log_info(logger, "  La tabla existe");

		mt_insert(table,timeStamp,key,value);
		log_info(logger, ">>>");
		log_info(logger, "Insert Exitoso");
		log_info(logger, ">>>");
		dump();
	}

	else log_error(logger, "La tabla sobre la que se quiere hacer el insert no existe");
}


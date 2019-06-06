#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<unistd.h>
#include<commons/string.h>
#include<commons/log.h>
#include<commons/collections/list.h>
#include"commons/txt.h"
#include<sys/types.h>
#include<sys/stat.h>

extern char* absoluto;
extern t_log *logger;

int fs_tableExists(char*);
int fs_create(char*,char*,int,int);
char *makeUrlForPartition(char *,char *);
char *makeTableUrl(char *);
void makeFiles(char *,int);
void makeDirectories(char*);
void makeMetadataFile(char *);
void loadMetadata(char *,char *,int ,int);

void fs_toDump(char*,char*); //nombre de tabla y el string a dumpear

t_list *fs_getListOfInserts(char*);

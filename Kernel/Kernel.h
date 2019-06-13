#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<semaphore.h>
#include<pthread.h>
#include<commons/log.h>
#include<commons/string.h>
#include<commons/config.h>
#include<commons/collections/queue.h>
#include<commons/collections/list.h>
#include<readline/readline.h>
#include<sharedLib/console.h>
#include<sharedLib/client.h>
#include"entities/Process.h"
#include"entities/Memory.h"
#include"entities/Table.h"
#include"entities/QueryExec.h"

#ifndef KERNEL_H
#define KERNEL_H

void load_logger();
void load_config();
void init_kernel();
void kill_kernel();
e_query newQuery(char *);
int read_lql_file(char*);
void add_process_to_new(t_process*);
void *new_to_ready();
void add_process_to_ready(t_process*);
void ready_to_exec(int);
void *processor_execute(void*);
void execute_query(t_query*);
void setConfigParameter(char*);
void init_memory();
int connect_to_memory();
void request_memory_pool(int);
void display_memories();
void add_memory_to_cons_type(int, e_cons_type);
t_memory *get_memory_of_cons_type(e_cons_type);
t_memory *get_memory_for_table(t_table*);
t_table *get_table(char*);
void add_table(t_table*);
void update_table(char*, e_cons_type, int, int);
void drop_table(char*);
char *get_memory_ip();
char *get_memory_port();
int get_quantum();
int get_multiprogramming_degree();
int get_metadata_refresh_rate();
int get_execution_delay();

#endif

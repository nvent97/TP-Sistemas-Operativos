#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<semaphore.h>
#include<commons/log.h>
#include<commons/config.h>
#include"commons/string.h"
#include<readline/readline.h>
//#include"sharedLib/query.h"
//#include<sharedLib/consistency.h>
#include"../insert/insert.h"
#include"../select/select.h"
#include"../create/create.h"
#include<sys/time.h>


extern t_log *logger;
extern t_config *config;
extern int retardTime;
extern sem_t MUTEX_RETARDTIME;

char **parseQuery(char*);
void *start_API();
void processQuery(char *);
uint64_t getCurrentTime();
void delayer();

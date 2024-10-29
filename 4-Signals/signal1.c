#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h> 
#include <time.h>
#include <signal.h>
#include <sys/wait.h>

void dmensaje(){
    
    sleep(5);

    time_t t;
    char *date;

    time(&t);
    date = ctime(&t);

    printf("(P): Fin del proceso %d: %s",getpid(),date);
    exit(0);
    
}

void sActivities (){
    
    time_t t;
    char *date;

    time(&t);
    date = ctime(&t);

    printf("(S): Inicio del proceso %d: %s",getpid(),date);

    kill(getppid(),10);

}

void dActivities (){

    signal(10,dmensaje);
    while(1){}
    
}

void main(){

    
    pid_t sp; //son's pid
    
    sp=fork();

    if (sp==0) {
        
        sActivities();

    }else{

        dActivities();

    }
    exit(0);
}

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h> 
#include <time.h>
#include <signal.h>
#include <sys/wait.h>

void wakeUp(){
    
    printf("Han trasncurrido: %d'' ",5);

}

void main(){

    signal(SIGVTALRM,wakeUp);

    while(1){
        
        sleep(5);

    }

    exit(0);

}
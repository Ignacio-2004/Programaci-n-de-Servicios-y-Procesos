#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h> 

int main(){

	mkfifo("./Pipes/FIFO1",0666); 
	
	srand(time(NULL));
	int fp=open("./Pipes/FIFO1",1); //fp 
	
	char chars[2];
	sprintf(chars,"%d",rand()%10); //chars
	
	write(fp,chars,sizeof(chars));
	
}

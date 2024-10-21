#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h> 

void main(){
	
	char[1]chars
	int num=-1;
	
	printf("Waiting ... \n");
	
	while(num==-1){
		fp = open ("./Pipes/FIFO1",0)
		
		if(read(fp,chars,sizeof(chars))!=-1){
			num=atoi(chars);
		}
	}
	printf("%d",num);
	
       mkfifo("./Pipes/FIFO2", S_IFIFO|0666); 
}


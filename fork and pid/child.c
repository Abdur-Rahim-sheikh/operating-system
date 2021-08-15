#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(){
	pid_t cpid,pid;
	
	cpid = fork();
	
	if(cpid < 0){
		printf("unsuccessful\n");
		exit(-1);
	}
	else if(cpid == 0){
		pid = getpid();
		printf("hello me the child, pid: %u\n",pid);
	}
	
	else{
		pid = getpid();
		printf("me parent, pid: %u\n",pid);
	}
	printf("my_child: %u\n",cpid);
	return 0;
}

#include<unistd.h>
#include<stdio.h>

#include<sys/wait.h>
int main(){
	pid_t status,pid;
	int *wstatus;
	status = fork();
	if(status >0){
		printf("parenting\n");
		pid = getpid();
		printf("with pid %u\n",pid);
		wait(wstatus);
	}
	else{
	 	printf("Childhood\n");
	}
	return 0;
}

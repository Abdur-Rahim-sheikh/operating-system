#include<stdio.h>
#include<unistd.h>
int main(){
	pid_t pid,ppid;
	pid = getpid();
	ppid = getppid();
	printf("pid: %u\nppid: %u\n",pid,ppid);
	return 0;
}

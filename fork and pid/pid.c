#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
int main(){
    pid_t pid,ppid;

    pid = getpid();
    ppid = getppid();

    printf("my pid: %u\nparent pid: %u\n\n",pid,ppid);
    sleep(60);
    return 0;
}
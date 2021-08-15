#include<stdio.h>
#include<unistd.h>

int main(){
    pid_t pid,ppid;
    execlp("./sum","sum",NULL);
    printf("Success\n");
    return 0;
}
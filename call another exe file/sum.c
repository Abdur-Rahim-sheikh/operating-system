#include<stdio.h>
#include<unistd.h>

int main(){
    pid_t pid,ppid;
    int a=3,b=5;
    
    printf("From sum exe file: %d\n",a+b);
    return 0;
}
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>

char *itoa(int n){
    char *sum;
    sum = malloc(20*sizeof(char));
    int flag = (n<0);
    n = abs(n);
    int i=0;
    if(n==0){
        return "0";
    }
    while(n){
        sum[i]=n%10+'0';
        n/=10;
        i++;
    }
    if(flag){
        sum[i]='-';
        i++;
    }
    sum[i]='\0';
    for(int k=0;2*k<i;k++){
        char ch = sum[k];
        sum[k] = sum[i-k-1];
        sum[i-k-1] = ch;
    }
    
    return (char *)sum;
}

int main(int argn,char *argv[]){
    // for(int i=0;i<argn;i++){
    //     printf("%s\n",argv[i]);
    // }
    int fd0 = atoi(argv[0]);
    int fd1 = atoi(argv[1]);
    int a = atoi(argv[2]);
    int b = atoi(argv[3]);
    if(b==0){
        write(fd1,"!zero given",12);//12 is len of string
    }
    else{
        close(fd0);
        char *div = itoa(a/b);
        // printf("divided: %s\n",div);
        write(fd1,div,strlen(div)+1);
    }
    
    
    return 0;
}
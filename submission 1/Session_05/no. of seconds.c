#include<stdio.h>
int main()
{
    char string[100]={0};
    int elapse=0;
    int ret=0,hour=0,min=0,sec=0;
    printf("\nEnter the time in \"hh:mm:ss\" format : ");
    fgets(string,100,stdin);
    sscanf(string , "%d:%d:%d" ,&hour,&min,&sec);
    elapse=sec+(60*min)+(3600*hour);
    printf("Elapsed time:%d",elapse);
}


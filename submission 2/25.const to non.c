#include<stdio.h>
int main()
{
const int cval= 100;
int *ptr;
ptr= &cval; //??
*ptr= 200; //warning discards const qualifier from pointer target
printf("%d",*ptr);//200
return 0;
}

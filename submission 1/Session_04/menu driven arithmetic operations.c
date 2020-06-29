#include<stdio.h>
int add(int a, int b);
int sub(int a , int b);
int mul(int a, int b);
int div(int a ,int b);
int  (*fun)(int a, int b);
int add(int a, int b)
{
return a+b;
}
int sub(int a , int b)
{
return (a-b);
}
int mul(int a, int b)
{
return(a*b);
}
int div(int a ,int b)
{
return (a/b);
}
int main()
{
int i,x,y;
int  (*fun)(int a, int b);
fun=add;
scanf("%d%d",&x,&y);
i=fun(x,y);
printf(“%d\n”,i);
fun=sub;
i=fun(x,y);
printf(“%d\n”,i);
fun=mul;
i=fun(x,y);
printf(“%d\n”,i);
fun=div;
i=fun(x,y);
printf(“%d\n”,i);
}

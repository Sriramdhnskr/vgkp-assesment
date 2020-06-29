#include<stdio.h>
#include<inttypes.h>
struct stud
{
 unsigned int a : 8;
 unsigned int b : 8;
 unsigned int c : 8;
 unsigned int d : 8;
};
int main()
{
struct stud s;
s.a=221;
s.b=121;
s.c=234;
s.d=300;
uint32_t w,x,y,z;
w=s.a;
x=s.b;
y=s.c;
z=s.d;
printf("%d.%d.%d.%d",w,x,y,z);
}

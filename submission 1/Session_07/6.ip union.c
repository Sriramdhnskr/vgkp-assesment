#include<stdio.h>
#include<inttypes.h>
union stud
{
 uint8_t a;
 uint8_t b;
 uint8_t c;
 uint8_t d;
};
int main()
{
union stud s;
scanf("%u%u%u%u",&s.a,&s.b,&s.c,&s.d);
uint32_t w,x,y,z;
w=(uint32_t)s.a;
x=(uint32_t)s.b;
y=(uint32_t)s.c;
z=(uint32_t)s.d;
printf("IP address: %u.%u.%u.%u",w,x,y,z);
}

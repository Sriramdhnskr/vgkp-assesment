#include<stdio.h>
#include<inttypes.h>
int main()
{
    char s[100];
 uint8_t a,b,c,d;
 uint32_t x,y,z,v;
 scanf("%d%d%d%d",&a,&b,&c,&d);
 x=a;
 y=b;
 z=c;
 v=d;
 sprintf(s,"%d.%d.%d.%d",x,y,z,v);
 puts(s);
}

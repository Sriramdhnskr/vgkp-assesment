#include<stdio.h>
#include <stdint.h>
int main()
{
    uint8_t x1,x2,x3,x4;
    uint32_t *a,*b,*c,*d;
    printf("Enter 4 values:");
    scanf("%d %d %d %d",&x1,&x2,&x3,&x4);
    a=(uint32_t*)&x1;
    b=(uint32_t*)&x2;
    c=(uint32_t*)&x3;
    d=(uint32_t*)&x4;
    printf("%u.%u.%u.%u",*a,*b,*c,*d);
    return 0;
}

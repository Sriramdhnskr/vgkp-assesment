#include <stdio.h>
#include <stdint.h>

int main()
{
    int x1,x2,x3,x4;
    uint8_t *a,*b,*c,*d;
    printf("Enter ip address:");
    scanf("%d.%d.%d.%d",&x1,&x2,&x3,&x4);
    a=(uint8_t*)&x1;
    b=(uint8_t*)&x2;
    c=(uint8_t*)&x3;
    d=(uint8_t*)&x4;
    printf("%u.%u.%u.%u",*a,*b,*c,*d);
    return 0;
}

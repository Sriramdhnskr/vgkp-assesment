#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t x[4];
    uint32_t a[4];
    printf("Enter ip address:");
    for(int i=0;i<4;i++)
    {
    scanf("%d ",&x[i]);
    }
    a[0]=(uint32_t)x[0];
    a[1]=(uint32_t)x[1];
    a[2]=(uint32_t)x[2];
    a[3]=(uint32_t)x[3];
    for(int i=0;i<4;i++)
    {
    printf("%u.",a[i]);
    }
    return 0;
}

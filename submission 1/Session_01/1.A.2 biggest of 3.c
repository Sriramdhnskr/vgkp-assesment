#include <stdio.h>
#include <stdint.h>

int main()
{
    int a,b,c;
	printf("Enter 3 values:");
    scanf("%d%d%d",&a,&b,&c);
    printf("biggest of 3 nos: %d",(a>b && a>c)?a:((b>c)?b:c));
    return 0;
}

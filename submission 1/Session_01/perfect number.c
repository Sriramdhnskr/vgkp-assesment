#include <stdio.h>

int main()
{
    int n,sum = 0, i;
    printf("Enter a number\n");
    scanf("%d", &n);
    for (i = 1;i<n;i++){
	    if (n % i == 0)
        sum = sum + i;
    }
    sum==n ? printf("\nPerfect number"): printf("\n Not a Perfect number");
    return 0;
}

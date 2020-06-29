#include<stdio.h>
#define A 6
#define R 3
#define C 4

int main()
{
    int arr[R][C],ar[A], i, j;
    printf("Enter 1-D array:");
    for(i=0;i<A;i++)
    {
            scanf("%d",&ar[i]);
    }
    printf("Enter 2-D array:");
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nEntered 1-D array:\n");
    for(i=0;i<A;i++)
    {
            printf("%d ",ar[i]);
    }
    printf("\nEntered 2-D array:\n");
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

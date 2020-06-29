#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    int *arr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<=n;i++)
    {
        scanf("%d",(arr+i));
    }
    int result = *(arr+0);
    for (int i=1; i<=n; i++)
    {
        result = result*n + *(arr+i);
    }
    printf("%d",result);
    return 0;

}

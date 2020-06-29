#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,tmp=0;
    scanf("%d",&n);
    int *arr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",(arr+i));
    }
     i = 0;
    j = n-1;

    while(i < j)
    {
        tmp = *(arr+i);
        *(arr+i) = *(arr+j);
        *(arr+j) = tmp;
        i++;
        j--;
    }
    for(int k=0;k<n;k++)
    {
        printf("%d ",arr[k]);
    }
}

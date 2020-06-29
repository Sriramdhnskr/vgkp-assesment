#include<stdio.h>
#include<stdlib.h>
int reverse(int *arr,int i,int j,int n)
{
     i = 0;
    j = n-1;
    int tmp=0;
    while(i < j)
    {
        tmp = *(arr+i);
        *(arr+i) = *(arr+j);
        *(arr+j) = tmp;
        i++;
        j--;
    }
    return arr;
}
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int *arr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",(arr+i));
    }
    reverse(arr,i,j,n);
    for(int k=0;k<n;k++)
    {
        printf("%d ",*(arr+k));
    }
}

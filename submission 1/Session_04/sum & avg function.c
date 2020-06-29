#include<stdio.h>
#include<stdlib.h>
int sumavg(int *arr,int i,int j,int n)
{
    int sum=0;
    float avg=0;
     for(int i=0;i<n;i++)
     {
         sum+=arr[i];
     }
     avg=sum/n;
     printf("sum=%d ,avg= %.2f",sum,avg);
     return 0;
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
    sumavg(arr,i,j,n);
    return 0;
}

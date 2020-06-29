#include<stdio.h>
#include<stdlib.h>
int max(int *a,int i,int n)
{
     int max=a[0];
     for(int i=0;i<n;i++)
     {
         if(*(a+i)>max)
         {
             max=a[i];
         }
     }
    return max;
}
int min(int *a,int i,int n)
{
     int min=a[0];
     for(int i=0;i<n;i++)
     {
         if(*(a+i)<min)
         {
             min=a[i];
         }
     }
    return min;
}
int main()
{
    int n,i,j,maxi,mini;
    scanf("%d",&n);
    int *arr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",(arr+i));
    }
    maxi=max(arr,i,n);
    mini=min(arr,i,n);
    printf("max=%d,min=%d",maxi,mini);
}

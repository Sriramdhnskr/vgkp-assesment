#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,temp=0;
    scanf("%d",&n);
    int *arr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",(arr+i));
    }
    for(i=0;i< n;i++)
    {
        for(j=i+1;j< n;j++)
        {
            if(*(arr+i)>*(arr+j))
            {
                temp    =*(arr+i);
                *(arr+i)  =*(arr+j);
                *(arr+j)  =temp;
            }
        }
    }

    printf("\nArray elements after sorting:\n");
    for(i=0;i< n;i++)
    {
        printf("%d\n",*(arr+i));
    }
    return 0;
}

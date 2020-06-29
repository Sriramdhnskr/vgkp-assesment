#include<stdio.h>
#include<conio.h>
void main()
{
     int ar1[100][100],n,i,j;
     printf("Enter value of n to create an identity matrix of order n ");
     scanf("%d",&n);
     printf(" Identity matrix is - \n");
     for(i=0;i<n;i++)
     {
           for(j=0;j<n;j++)
           {
                 if(i==j)
                 {
                         *(*(ar1+i)+j)=1;
                         printf("%d ",*(*(ar1+i)+j));
                 }
                 else
                 {
                     *(*(ar1+i)+j)=0;
                     printf("%d ",*(*(ar1+i)+j));
                 }
           }
           printf("\n");
     }

}

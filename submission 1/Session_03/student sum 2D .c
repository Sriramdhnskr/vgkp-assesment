#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
int a[100][100],i,j,m,n,sumR=0,sumC=0;
float avgR,avgC;
printf("Enter number of subjects:");
scanf("%d",&m);
printf("Enter number of students:");
scanf("%d",&n);
printf("Enter 1 matrix:");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",(*(a+i)+j));
}
}
for (i = 0; i < m; i++)
    {
        sumR = 0;
        for (j = 0; j < n; j++)
        {
            sumR += a[i][j];
            avgR=sumR/n;
        }
        printf("Sum of each student marks %d = %d\n ,avg=%.2f\n", i+1, sumR,avgR);
    }
     for (i = 0; i < n; i++)
    {
        sumC = 0;
        for (j = 0; j < m; j++)
        {
            sumC += a[j][i];
            avgC=sumC/m;
        }
        printf("Sum of subjects %d = %d\n,avg=%.2f\n", i + 1, sumC,avgC);
    }
}

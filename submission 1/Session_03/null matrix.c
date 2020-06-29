#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
int a[100][100],i,j,m,n;
printf("Enter m & n:");
scanf("%d %d",&m,&n);
printf("Enter a matrix:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
*(*(a+i)+j)=0;
}
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
*(*(a+i)+j)=0;
}
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d ",*(*(a+i)+j));
}
printf("\n");
}
}

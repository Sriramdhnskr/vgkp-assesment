#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
int a[100][100],b[100][100],c[100][100],i,j,m,n;
printf("Enter m & n:");
scanf("%d %d",&m,&n);
printf("Enter 1 matrix:");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",(*(a+i)+j));
}
}
printf("\nEnter 2 matrix:");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",(*(b+i)+j));
}
}
printf("\nAddition Matrix:\n");
for(i=0;i<m;i++)
{ for(j=0;j<n;j++)
{
*(*(c+i)+j)=*(*(a+i)+j)+ *(*(b+i)+j);
printf("%d ",*(*(c+i)+j));
}
printf("\n");
}
printf("\nSubtraction Matrix:\n");
for(i=0;i<m;i++)
{ for(j=0;j<n;j++)
{
*(*(c+i)+j)=*(*(a+i)+j)- *(*(b+i)+j);
printf("%d ",abs(*(*(c+i)+j)));
}
printf("\n");
}
}

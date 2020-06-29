#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
int a[100][100],b[100][100],res[100][100],i,j,m,n,k;
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
}for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            res[i][j] = 0;
            for (k = 0; k < n; k++)
                *(*(res+i)+j) += *(*(a+i)+k) * *(*(b+k)+j);
                printf("%d ",*(*(res+i)+j));
        }
    }
}

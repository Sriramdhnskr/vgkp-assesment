#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
int a[100][100],i,j,m,n,flag=0;
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
for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (a[i][j] != 0)
			{
				flag = -1;
				break;
			}
		}
	}

	if (flag == 0)
	{
		printf ("It is a NULL MATRIX\n");
	}
	else
	{
		printf ("It is NOT an NULL matrix\n");
	}
}

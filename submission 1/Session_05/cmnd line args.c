#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

int minimum,max;
if(argc != 4 )
{
    printf("Please input the number of integers as ./a.out number\n");
    return 1;
}
printf("enter the %d number", atoi(argv[1]));
int arr[atoi(argv[1])];
for(int i = 0; i< atoi(argv[1]); i++)
{
    scanf("%d",&arr[i]);
}

 minimum = arr[0];
 max=arr[0];
    for ( int c = 1 ; c < atoi(argv[1]) ; c++ )
    {
        if ( arr[c] < minimum )
        {
           minimum = arr[c];

        }
        if ( arr[c] > max )
        {
           max = arr[c];

        }
    }
 printf("Minimum element is = %d\n",minimum);
 printf("Maximum element is = %d\n",max);
}

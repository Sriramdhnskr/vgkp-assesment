#include<stdio.h>

int sumOfDigits (int n)
{
    if (n != 0)
    {
        return (n % 10 + sumOfDigits (n / 10));
    }
    else
    {
       return 0;
    }
}

int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("\n%d",sumOfDigits(n));
}

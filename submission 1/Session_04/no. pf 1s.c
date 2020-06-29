#include<stdio.h>
int count(int n)
{
    unsigned int c=0;
    while(n)
    {
        c+=n&1;
        n>>=1;
    }
    return c;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",count(n));
}

#include<stdio.h>
int fact(int n)
{
    int f=1;
    for(int i=n;i>0;i--)
    {
        f*=i;
    }
    return f;
}
int main()
{
    int n,r;
    scanf("%d %d",&n,&r);
    int res=fact(n)/(fact(n-r)*fact(r));
    printf("%d",res);
    return 0;
}

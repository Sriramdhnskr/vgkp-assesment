#include <stdio.h>

int main()
{
    int n,r,a[5],j=0;
    int count[10] = {0};
    printf("Enter a 5 Digit number:");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        a[j++]=r;
        n/=10;
    }
    for(int j=0;j<5;j++)
    {
        count[a[j]]++;
    }
    int res=0,mul=1;
    for(int i=0;i<=9;i++)
    {
        while(count[i]>0)
        {
            res=res+(i*mul);
            count[i]--;
            mul=mul*10;
        }
    }
    printf("%d",res/10);
}

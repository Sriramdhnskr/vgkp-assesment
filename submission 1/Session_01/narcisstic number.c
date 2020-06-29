#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    int powElement=0,t = n,res=0;

    while(t){
        powElement+=1;
        t/=10;
    }

    t=n;
    while(t){
        res+=pow((t%10),powElement);
        t/=10;
    }
    if(res==n)printf("\nNarcissistic Number ");
    else printf("\nNot a Narcissistic Number ");

    return 0;
}

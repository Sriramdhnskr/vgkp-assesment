#include<stdio.h>
#include<math.h>

int main() {
    int n,count=1;
    printf("Enter a n\n");
    scanf("%d",&n);
    for(int i=2;i<=(int)sqrt(n);i++){
        if(n%i==0)count+=1;
    }
    if(count==1)
    printf("\nThe given n is a Prime number");
    else
        printf("\nThe given n is not a Prime Number");
    return 0;
}

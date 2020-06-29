#include<stdio.h>
#include<math.h>

int isPrime(int n){
    int count=0;
    for(int i=2;i<=(int)sqrt(n);i++){
        if(n%i==0)
            count+=1;
    }
    return(count);
}

int main() {
    int start, end;
    printf("Enter the range in which you want the prime numbers\n");
    scanf("%d %d",&start,&end);
    for(int i=start;i<=end;i++){
    if(!isPrime(i))
        printf("\n%d",i);
    }

    return 0;
}

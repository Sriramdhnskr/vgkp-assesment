#include<stdio.h>

int main() {

    int n, temp,sum=0, reverse=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    temp = n;
    while(temp){
        sum+=temp%10;
        temp/=10;
    }
    printf("\nThe sum of the digits of a given n is %d",sum);
    temp = n;
    while(temp){
        reverse=(reverse * 10) + (temp%10);
        temp/=10;
    }printf("\nThe reverse of the given n is %d",reverse);
    n == reverse ? printf("\nThe given n is palindrome") : printf("\nThe given n is not a palindrome");

}

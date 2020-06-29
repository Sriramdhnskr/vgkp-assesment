#include<stdio.h>
#include<ctype.h>

int main() {
    char c;
    printf("Enter a character\n");
    scanf("%c",&c);
    c = tolower(c);
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    printf("The Character is a vowel");
    else
    printf("The Character is not a vowel");
}

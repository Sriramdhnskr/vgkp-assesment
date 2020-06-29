#include <stdio.h>
int main()
{
    int num, flippedNumber;
    printf("Enter any number: ");
    scanf("%d", &num);
    flippedNumber = ~num;
    printf("number = %d\n", num);
    printf("Biggest number = %d (in decimal)", flippedNumber);

    return 0;
}

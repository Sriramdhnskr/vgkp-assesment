#include <stdio.h>
int bin(int number)
{
    if (number == 0)
        return 0;
    else
        return (number % 2 + 10 * bin(number / 2));
}
int oct(int number)
{
    if (number == 0)
        return 0;
    else
        return (number % 8 + 10 * oct(number / 8));
}
int main()
{
    int number;
    scanf("%d",&number);
    printf("%d\n",bin(number));
    printf("%d\n",oct(number));
    return 0;
}

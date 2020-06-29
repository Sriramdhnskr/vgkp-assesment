#include <stdio.h>

int main() {
    char op;
    float a, b;
    printf("Enter an operator \n");
    scanf("%c", &op);
    printf("\nEnter two numbers \n ");
    scanf("%f %f", &a, &b);

    switch (op) {
    case '+':
        printf("\n%.2f + %.2f = %.2f", a, b, a + b);
        break;
    case '-':
        printf("\n%.2f - %.2f = %.2f", a, b, a - b);
        break;
    case '*':
        printf("\n%.2f * %.2f = %.2f", a, b, a * b);
        break;
    case '/':
        printf("\n%.2f / %.2f = %.2f", a, b, a / b);
        break;
    default:
        printf("\n Invalid operator");
    }

    return 0;
}

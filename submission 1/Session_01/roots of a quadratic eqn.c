#include <stdio.h>
#include <math.h>

int main() {

    float a,b,c,d,r1,r2,realPart,imagPart;
    printf("Enter coefficients a,b,c\n");
    scanf("%f %f %f", &a, &b, &c);

    d = (b*b)-(4*a*c);

    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("\nroot1 = %.2f \nroot2 = %.2f",r1,r2);
    }
    else if (d == 0) {
        r1 = r2 = -b / (2 * a);
        printf("root1 = root2 = %.2f;",r1);
    }
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-d) / (2 * a);
        printf("\nroot1 = %.2f+j%.2f \nroot2 = %.2f-j%.2f",realPart,imagPart,realPart,imagPart);
    }

    return 0;
}

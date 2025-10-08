#include <stdio.h>

int main() {
    float a, b, sum, diff, prod, quot;
    printf("Enter the first number: ");
    scanf("%f", &a);
    printf("Enter the second number: ");
    scanf("%f", &b);

    sum = a + b;
    diff = a - b;
    prod = a * b;

    if (b != 0) {
        quot = a / b;
        printf("The sum is %.2f\n", sum);
        printf("The difference is %.2f\n", diff);
        printf("The product is %.2f\n", prod);
        printf("The quotient is %.2f\n", quot);
    } else {
        printf("The sum is %.2f\n", sum);
        printf("The difference is %.2f\n", diff);
        printf("The product is %.2f\n", prod);
        printf("Division by zero is not allowed.\n");
    }   
}
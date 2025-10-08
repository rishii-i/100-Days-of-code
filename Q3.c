#include <stdio.h>

int main() {
    float a, b, area, perimeter;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &a);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &b);

    area = a * b;
    perimeter = 2 * (a + b);    
    printf("The area of the rectangle is %.2f\n", area);
    printf("The perimeter of the rectangle is %.2f\n", perimeter);
    return 0;
}
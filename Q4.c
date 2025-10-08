#include <stdio.h>

int main() {
    float a, area, circumference;
    double pi = 3.14159;

    printf("Enter the radius of the circle: ");
    scanf("%f", &a);

    area = pi * a * a;
    circumference = 2 * pi * a ;
    printf("The area of the circle is %.2f\n", area);
    printf("The circumference of the circle is %.2f\n", circumference);
    return 0;
}
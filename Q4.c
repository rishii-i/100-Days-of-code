#include <stdio.h>

int main() {
    float a, area, circumference;
    float pi = 3.14;

    printf("Enter the radius of the circle: ");
    scanf("%f", &a);

    area = pi * a * a;
    circumference = 2 * pi * a ;
    printf("The area of the circle is %f\n", area);
    printf("The circumference of the circle is %f\n", circumference);
    return 0;
}
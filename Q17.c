#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, root, discriminant, realPart, imagPart;

    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("Coefficient 'a' cannot be zero for a quadratic equation.\n");
        return 1;
    }
    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root = (-b + sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different.\n");
        printf("Root 1 = %.2lf\n", root);
        root = (-b - sqrt(discriminant)) / (2 * a);
        printf("Root 2 = %.2lf\n", root);
    } else if (discriminant == 0) {
        root = -b / (2 * a);
        printf("Roots are real and the same: %.2f\n", root);
    
    } else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex.\n");
    }
    return 0;
}
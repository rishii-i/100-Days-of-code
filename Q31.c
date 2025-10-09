#include <stdio.h>

int main() {
    int n, binary = 0, r, i = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    while (n != 0) {
        r = n % 2;
        n /= 2;
        binary += r * i;
        i *= 10;
    }
    printf("Binary: %d\n", binary);
    return 0;
}
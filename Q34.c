#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Not a prime number.\n");
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            printf("Not a prime number.\n");
            return 0;
        }
    }
    printf("Prime number.\n");
    return 0;

}
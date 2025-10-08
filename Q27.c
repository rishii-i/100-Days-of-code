#include <stdio.h>

int main() {
    int n;
    printf("Enter a number to find the sum of first n odd numbers: ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += (2 * i - 1);
    }
    printf("%d", sum);
    return 0;
}
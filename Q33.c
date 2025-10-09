#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int original = n, sum = 0, digits = 0, temp = n;

    while (temp != 0) {
        digits++;
        temp /= 10;
    }
    temp = n;
    while (temp != 0) {
        int digit = temp % 10, power = 1;
        
        for (int i = 0; i < digits; i++) {
            power *= digit;
        }
        sum += power;
        temp /= 10;
    }
    if (sum == original) {
        printf("Armstrong number.\n");
    } else {
        printf("Not Armstrong number.\n");
    }
    return 0;
}
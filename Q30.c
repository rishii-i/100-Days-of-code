#include <stdio.h>

int main() {
    int n;
    printf("Enter a number to reverse: ");
    scanf("%d", &n);

    int reversed = 0;
    while (n != 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    printf("%d", reversed);
    return 0;
}
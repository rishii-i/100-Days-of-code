#include <stdio.h>

int main() {
    int n, digit, product = 1, found_odd = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10; 
        if (digit % 2 != 0) { 
            product *= digit; 
            found_odd = 1; 
        }
        n /= 10;        
    }
    if (found_odd) {
        printf("%d\n", product);
    } else {
        printf("1 (no odd digits, assume 1)\n");
    }
    return 0;
}
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number to get product of even numbers till n: ");
    scanf("%d", &n);

    int product = 1;
    for (int i = 2; i <= n; i += 2) {
        product *= i;
    }
    printf("%d", product);
    return 0;
    
}
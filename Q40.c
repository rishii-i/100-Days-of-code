#include <stdio.h>

int main() {
    int n, ones_complement = 0, place_value = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        int digit = n % 10;
        int flipped_digit = (digit == 0) ? 1 : 0; 
        ones_complement += flipped_digit * place_value;
        place_value *= 10; 
        n /= 10; 
    }
    printf("%d\n", ones_complement);
    return 0;
}
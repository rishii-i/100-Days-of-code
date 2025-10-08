#include <stdio.h>

int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if(a != 0) {
        if (a > 0) {
            printf("Positive.\n", a);
        } else {
            printf("Negative.\n", a);
        }
    } else {
        printf("Zero.\n");
    }
    return 0;
}

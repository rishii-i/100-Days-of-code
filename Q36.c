#include <stdio.h>

int main() {
    int n, m;

    printf("Enter two numbers: ");
    scanf("%d %d", &n, &m);

    int a = n, b = m;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    printf("%d\n",a );
    return 0;
}
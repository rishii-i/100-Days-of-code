#include <stdio.h>

int main() {
    int units, bill;
    printf("Enter number of units consumed: ");
    scanf("%d", &units);

    if (units <= 100 && units >= 0) {
        bill = units * 5;
        printf("Electricity Bill: %d Rs.", bill);
    } 
    else if (units <= 200) {
        bill = (100 * 5) + ((units - 100) * 7);
        printf("Electricity Bill: %d Rs.", bill);
    } 
    else if (units <= 300) {
        bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
        printf("Electricity Bill: %d Rs.", bill);
    } 
    else {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + ((units - 300) * 12);
        printf("Electricity Bill: %d Rs.", bill);
    }

    return 0;
    
}
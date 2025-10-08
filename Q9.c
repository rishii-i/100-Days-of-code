#include <stdio.h>
#include <math.h>

int main() {
    int principal, rate, time;
    float simple_interest, compound_interest;
    printf("Enter the principal amount: ");
    scanf("%d", &principal);
    printf("Enter the rate of interest: ");
    scanf("%d", &rate);
    printf("Enter the time in years: ");
    scanf("%d", &time);

    simple_interest = (principal * rate * time) / 100.0;
    compound_interest = principal * (pow((1 + rate / 100.0), time)) - principal;
    printf("The Simple Interest is: %.2f\n", simple_interest);
    printf("The Compound Interest is: %.2f\n", compound_interest);
    return 0;
}
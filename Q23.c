#include <stdio.h>

int main() {
    int late_days;
    int fine;

    printf("Enter number of late days: ");
    scanf("%d", &late_days);

    if (late_days <= 5 && late_days >= 1) 
    {
        printf("Fine: %d Rs.", late_days * 2);
    } 
    else if (late_days <= 10 && late_days >= 6) 
    {
        printf("Fine: %d Rs.", (5 * 2) + ((late_days - 5) * 4));
    }
     else if (late_days <= 20 && late_days >= 11) 
    {
        printf("Fine: %d Rs.", (5 * 2) + (5 * 4) + ((late_days - 10) * 6));
    }
     else if (late_days > 30) 
    {
        printf("Membership Cancelled.");
    }
     else 
    {
        printf("No fine.\n");
    }
    return 0;
}
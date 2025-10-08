#include <stdio.h>

int main() {
    int cost, sell_price, profit_percent, loss_percent;
    printf("Enter cost price: ");
    scanf("%d", &cost);
    printf("Enter selling price: ");
    scanf("%d", &sell_price);

    if (sell_price > cost) {
        profit_percent = ((sell_price - cost) * 100) / cost;
        printf("Profit: %d%%\n", profit_percent);
    } 
    else if (cost > sell_price) {
        loss_percent = ((cost - sell_price) * 100) / cost;
        printf("Loss: %d%%\n", loss_percent);
    }
     else {
        printf("No profit, no loss.\n");
    }
    return 0;

}
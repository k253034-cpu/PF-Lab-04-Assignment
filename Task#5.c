#include <stdio.h>

int main() {
    int currentTime;
    float totalCost = 20.0; // Assuming a base cost for calculation

    printf("Enter the current time (0-23): ");
    scanf("%d", &currentTime);

    if (currentTime >= 11 && currentTime <= 14) {
        totalCost = totalCost * 0.90; // 10% discount
        printf("You received a 10%% discount!\n");
    }

    printf("Your discounted total is $%.2f\n", totalCost);

    return 0;
}

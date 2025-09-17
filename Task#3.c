#include <stdio.h>

int main() {
    int crustType;
    float totalCost = 8.0; // Assuming a base cost for a single pizza

    printf("Choose a crust type:\n");
    printf("1. Regular crust ($0)\n");
    printf("2. Thin crust ($1)\n");
    printf("3. Stuffed crust ($2)\n");
    printf("Enter your choice: ");
    scanf("%d", &crustType);

    if (crustType == 1) {
        // No extra cost
    } else if (crustType == 2) {
        totalCost += 1.0;
    } else if (crustType == 3) {
        totalCost += 2.0;
    } else {
        printf("Invalid crust type.\n");
        return 1;
    }

    printf("Your new total cost is $%.2f\n", totalCost);

    return 0;
}

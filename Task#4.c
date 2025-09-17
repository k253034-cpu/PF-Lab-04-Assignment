#include <stdio.h>

int main() {
    char extraCheese;
    float totalCost = 10.0; // Assuming a base cost

    printf("Do you want extra cheese (Y/N)? ");
    scanf(" %c", &extraCheese);

    if (extraCheese == 'Y' || extraCheese == 'y') {
        totalCost += 1.50;
    }

    printf("Your total is $%.2f\n", totalCost);

    return 0;
}

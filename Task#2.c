#include <stdio.h>

int main() {
    int numPizzas;
    float totalCost = 0.0;

    printf("How many pizzas do you want (1, 2, or 3)? ");
    scanf("%d", &numPizzas);

    if (numPizzas == 1) {
        totalCost = 8.0;
    } else if (numPizzas == 2) {
        totalCost = 15.0;
    } else if (numPizzas == 3) {
        totalCost = 21.0;
    } else {
        printf("Invalid number of pizzas.\n");
        return 1;
    }

    printf("You want %d pizza(s). Your total is $%.2f\n", numPizzas, totalCost);

    return 0;
}

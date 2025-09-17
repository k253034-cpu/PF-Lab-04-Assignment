#include <stdio.h>

int main() {
    int deliveryOption;
    float totalCost = 10.0; // Assuming a base cost

    printf("Is it delivery or pickup?\n");
    printf("1. Pickup\n");
    printf("2. Delivery\n");
    printf("Enter your choice: ");
    scanf("%d", &deliveryOption);

    if (deliveryOption == 2) {
        totalCost += 3.0;
        printf("A $3 delivery fee has been added.\n");
    }

    printf("Your final cost is $%.2f\n", totalCost);

    return 0;
}

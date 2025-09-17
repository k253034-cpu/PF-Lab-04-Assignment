#include <stdio.h>
#include <string.h>

int main() {
    int size, numPizzas, crustType, currentTime, deliveryOption;
    char extraCheese, studentID;
    float totalCost = 0.0;

    // Question 1: Pizza Size
    printf("Choose a pizza size:\n");
    printf("1. Small\n2. Medium\n3. Large\n");
    printf("Enter your choice: ");
    scanf("%d", &size);

    if (size == 1) {
        totalCost = 8.0;
    } else if (size == 2) {
        totalCost = 10.0;
    } else if (size == 3) {
        totalCost = 12.0;
    } else {
        printf("Invalid size. Program will exit.\n");
        return 1;
    }
    
    // Question 3: Multi-Pizza Deals
    printf("How many pizzas do you want (1, 2, or 3)? ");
    scanf("%d", &numPizzas);

    if (numPizzas == 1) {
        // Cost already set
    } else if (numPizzas == 2) {
        totalCost = 15.0;
    } else if (numPizzas == 3) {
        totalCost = 21.0;
    } else {
        printf("Invalid number of pizzas. Program will exit.\n");
        return 1;
    }

    // Question 4: Crust Type Cost
    printf("Choose a crust type:\n");
    printf("1. Regular crust ($0)\n2. Thin crust ($1)\n3. Stuffed crust ($2)\n");
    printf("Enter your choice: ");
    scanf("%d", &crustType);

    if (crustType == 2) {
        totalCost += 1.0;
    } else if (crustType == 3) {
        totalCost += 2.0;
    }

    // Question 5: Extra Cheese
    printf("Do you want extra cheese (Y/N)? ");
    scanf(" %c", &extraCheese);

    if (extraCheese == 'Y' || extraCheese == 'y') {
        totalCost += 1.50;
    }

    // Question 6: 10% Discount
    printf("Enter the current time (0-23): ");
    scanf("%d", &currentTime);

    if (currentTime >= 11 && currentTime <= 14) {
        totalCost *= 0.90;
        printf("You received a 10%% discount!\n");
    }

    // Question 7: Student Discount
    printf("Do you have a student ID (Y/N)? ");
    scanf(" %c", &studentID);

    if (studentID == 'Y' || studentID == 'y') {
        totalCost -= 2.0;
        printf("You received a $2 student discount.\n");
    }

    // Question 9: Delivery or Pickup
    printf("Is it delivery or pickup?\n");
    printf("1. Pickup\n2. Delivery\n");
    printf("Enter your choice: ");
    scanf("%d", &deliveryOption);

    if (deliveryOption == 2) {
        totalCost += 3.0;
    }

    // Question 8: Free Garlic Bread
    if (numPizzas == 3 && crustType == 3) {
        printf("You get free garlic bread!\n");
    }

    printf("Your final cost is $%.2f\n", totalCost);

    return 0;
}

#include <stdio.h>

int main() {
    int numPizzas;
    int crustType;

    printf("How many pizzas do you want (1, 2, or 3)? ");
    scanf("%d", &numPizzas);
    printf("Choose a crust type:\n");
    printf("1. Regular\n2. Thin\n3. Stuffed\n");
    printf("Enter your choice: ");
    scanf("%d", &crustType);

    if (numPizzas == 3 && crustType == 3) {
        printf("You get free garlic bread!\n");
    }

    return 0;
}

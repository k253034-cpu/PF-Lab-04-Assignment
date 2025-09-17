#include <stdio.h>

int main() {
    int numPizzas;

    printf("How many pizzas do you want? ");
    scanf("%d", &numPizzas);

    if (numPizzas > 1) {
        printf("Check our multi-pizza deals.\n");
    } else {
        printf("Your total is $8.\n");
    }

    return 0;
}

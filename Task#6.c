#include <stdio.h>

int main() {
    char studentID;
    float totalCost = 15.0; // Assuming a base cost

    printf("Do you have a student ID (Y/N)? ");
    scanf(" %c", &studentID);

    if (studentID == 'Y' || studentID == 'y' || studentID == 'Yes' ) {
        totalCost -= 2.0;
        printf("You received a $2 student discount.\n");
    }

    printf("Your final cost is $%.2f\n", totalCost);

    return 0;
}

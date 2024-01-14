#include <stdio.h>

// Author: Nikhil
// Program : Simple Calculator.

int main() {
    int choice;
    float num1, num2;  // Can only take two inputs.

    // Loop to display menu
    do {
        printf("\033[0;31m Calculator Menu :\033[0m\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        //printf("\033[0;31m [TEXT] \033[0m\n"); // Reference for colouring sentences
        
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            // Adding
            case 1:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                printf("%.2f + %.2f = %.2f", num1, num2, num1 + num2);
                break;

            // Subtracting
            case 2:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                printf("%.2f - %.2f = %.2f", num1, num2, num1 - num2);
                break;

            // Multiplicating
            case 3:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                printf("%.2f x %.2f = %.2f", num1, num2, num1 * num2);
                break;

            // Dividing
            case 4:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                if(num2 == 0) {
                    printf("Cannot divide by zero.");
                }
                else {
                    printf("%.2f / %.2f = %.3f", num1, num2, num1 / num2);
                }
                break;

            // Exit Sequence
            case 5:
                printf("Goodbye!");
                break;

            // Error msg
            default:
                printf("Invalid choice. Try again.");
        }
    } while(choice != 5);

    return 0;
}
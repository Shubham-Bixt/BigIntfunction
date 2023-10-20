#include "bigint_operations.h"
#include <stdio.h>

int main() {
    BigInt num1, num2, result;
    int choice;

    initBigInt(&num1);
    initBigInt(&num2);
    initBigInt(&result);

    do {
        printf("\nMenu:\n");
        printf("1. Enter First Big Integer\n");
        printf("2. Enter Second Big Integer\n");
        printf("3. Add Big Integers\n");
        printf("4. Subtract Big Integers\n"); // Updated menu option
        printf("5. Display Result (Reversed)\n");
        printf("6. Exit\n"); // Adjusted menu options
        printf("Enter your choice: ");
        scanf("%d", &choice);

        while (getchar() != '\n'); // Clear the input buffer

        switch (choice) {
            case 1:
                printf("Enter first big integer: ");
                char ch;
                while ((ch = getchar()) != '\n') {
                    if (ch >= '0' && ch <= '9') {
                        insertDigit(&num1, ch - '0');
                    }
                }
                break;
            case 2:
                printf("Enter second big integer: ");
                while ((ch = getchar()) != '\n') {
                    if (ch >= '0' && ch <= '9') {
                        insertDigit(&num2, ch - '0');
                    }
                }
                break;
            case 3:
                addBigInts(&num1, &num2, &result);
                break;
            case 4:
                subtractBigInts(&num1, &num2, &result); // Perform subtraction
                break;
            case 5:
                printf("Result (Reversed): ");
                displayReversedBigInt(&result);
                break;
            case 6:
                clearBigInt(&num1);
                clearBigInt(&num2);
                clearBigInt(&result);
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 6);

    return 0;
}

#include "bigint_operations.h"
#include <stdio.h>
#include<stdlib.h>

int main() 
{
    BigInt num1, num2, result;
    int choice;

    initBigInt(&result);
    
    initBigInt(&num1);
    
    initBigInt(&num2);
    
    
    do
        {
        printf("\nMenu for BIG INT:\n");
        printf("1. Enter First Integer\n");
        printf("2. Enter Second Integer\n");
        printf("3. Add two Big Integers\n");
        printf("4. Subtract two Big Integers\n"); 
        printf("5. Display Result\n");
        printf("6. Exit the program\n"); 
        printf("Enter your choice:- ");
        scanf("%d", &choice);

        while (getchar() != '\n');

        switch (choice)
            {
                
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
                subtractBigInts(&num1, &num2, &result);
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

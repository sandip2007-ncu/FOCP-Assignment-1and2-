#include <stdio.h>

int main() {
    int choice;
    int decimal, binary;
    int remainder, base, temp, result;

    printf("=== Binary and Decimal Converter ===\n");
    printf("1. Convert Decimal to Binary\n");
    printf("2. Convert Binary to Decimal\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter a decimal number: ");
        scanf("%d", &decimal);

        binary = 0;
        base = 1;
        temp = decimal;

        while (temp > 0) {
            remainder = temp % 2;         
            binary = binary + remainder * base; 
            temp = temp / 2;              
            base = base * 10;            
        }

        printf("Binary form of %d is: %d\n", decimal, binary);
    }

    else if (choice == 2) {
        printf("Enter a binary number: ");
        scanf("%d", &binary);

        result = 0;
        base = 1;
        temp = binary;

        while (temp > 0) {
            remainder = temp % 10;          
            result = result + remainder * base; 
            base = base * 2;              
            temp = temp / 10;               
        }

        printf("Decimal form of %d is: %d\n", binary, result);
    }

    else {
        printf("Invalid choice! Please enter 1 or 2.\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nOriginal values: a = %d, b = %d\n", a, b);

    printf("\n--- Method 1: Using Temporary Variable ---\n");
    temp = a;
    a = b;
    b = temp;
    printf("After swapping: a = %d, b = %d\n", a, b);

    printf("\nEnter two numbers again: ");
    scanf("%d %d", &a, &b);

    printf("\n--- Method 2: Using Arithmetic Operators ---\n");
    a = a + b;   
    b = a - b;   
    a = a - b;  
    printf("After swapping: a = %d, b = %d\n", a, b);

    printf("\nEnter two numbers again: ");
    scanf("%d %d", &a, &b);

    printf("\n--- Method 3: Using Bitwise XOR ---\n");
    a = a ^ b;   
    b = a ^ b;   
    a = a ^ b;    
    printf("After swapping: a = %d, b = %d\n", a, b);

    printf("\nEnter two numbers again: ");
    scanf("%d %d", &a, &b);

    printf("\n--- Method 4: Using Pointers ---\n");
    int *p1, *p2;   
    p1 = &a;
    p2 = &b;

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
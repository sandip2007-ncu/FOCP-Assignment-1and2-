#include <stdio.h>

int subtract(int x, int y) {
    while (y != 0) {
        int borrow = (~x) & y;

        x = x ^ y;

        y = borrow << 1;
    }

    return x;
}

int main() {
    int num1, num2, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    result = subtract(num1, num2);

   
    printf("The result of %d - %d = %d\n", num1, num2, result);

    return 0;
}

#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNumber, remainder, n = 0;
    double result = 0.0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    while (originalNumber != 0) {
        originalNumber /= 10;
        ++n;
    }

    originalNum = num;

    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }

   
    if ((int)result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;

}

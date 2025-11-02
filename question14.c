#include <stdio.h>

int main() {
    int n, i, j, count = 0;
    int arr[100];
    int isPrime;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] < 2)
            continue;

        isPrime = 1;  // assume number is prime

        for (j = 2; j <= arr[i] / 2; j++) {
            if (arr[i] % j == 0) {
                isPrime = 0;  // not prime
                break;
            }
        }

        if (isPrime)
            count++;
    }

    printf("\nTotal prime numbers in array: %d\n", count);

    return 0;
}
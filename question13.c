#include <stdio.h>

int main() {
    int n, i;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nPeak elements are: ");

    for (i = 0; i < n; i++) {
        if ((i == 0 && arr[i] >= arr[i + 1]) ||                   
            (i == n - 1 && arr[i] >= arr[i - 1]) ||                 
            (i > 0 && i < n - 1 && arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])) {  
            printf("%d ", arr[i]);
        }
    }

    printf("\n");

    return 0;
}
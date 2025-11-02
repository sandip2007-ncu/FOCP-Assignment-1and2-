#include <stdio.h>

int main() {
    int n, i, found = 0;
    int scores[100];  

    printf("Enter number of scores: ");
    scanf("%d", &n);

    printf("Enter %d scores:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    for (i = 0; i < n; i++) {
        if (scores[i] == 99) {
            found = 1;
            printf("The first occurrence of 99 is at position %d.\n", i + 1);
            break; 
        }
    }

    if (found == 0) {
        printf("99 not found in the list.\n");
    }

    return 0;
}

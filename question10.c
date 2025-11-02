#include <stdio.h>

int main() {
    int n, i, count = 0;
    int marks[100];  

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter marks of %d students:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }

    printf("\nStudents who scored 99:\n");
    for (i = 0; i < n; i++) {
        if (marks[i] == 99) {
            printf("Student %d scored 99\n", i + 1);
            count++;
        }
    }

    if (count == 0) {
        printf("\nNo student scored 99.\n");
    } else {
        printf("\nTotal number of students who scored 99: %d\n", count);
    }

    return 0;
}

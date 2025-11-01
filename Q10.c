#include <stdio.h>

int main() {
    int n, i, count = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    int marks[n];

    printf("Enter the marks of %d students:\n", n);
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

    printf("\nTotal number of students who scored 99 = %d\n", count);

    return 0;
}

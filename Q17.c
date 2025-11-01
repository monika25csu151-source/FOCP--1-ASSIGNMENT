#include <stdio.h>

int main() {
    int n, i, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100];

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nArray before deletion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n\nWhere do you want to delete?\n");
    printf("1. Front\n");
    printf("2. Middle (any position)\n");
    printf("3. End\n");
    printf("Enter your choice: ");
    int choice;
    scanf("%d", &choice);

    if (choice == 1) {
        pos = 0;
    }
    else if (choice == 2) {
        printf("Enter the position to delete (0 to %d): ", n - 1);
        scanf("%d", &pos);
    }
    else if (choice == 3) {
        pos = n - 1;
    }
    else {
        printf("Invalid choice!\n");
        return 0;
    }

    
    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;  

    printf("\nArray after deletion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

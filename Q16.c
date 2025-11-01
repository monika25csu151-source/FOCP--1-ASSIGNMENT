#include <stdio.h>

int main() {
    int n, i, pos, value;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100];  

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nArray before insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n\nEnter the value to insert: ");
    scanf("%d", &value);

    printf("Where do you want to insert?\n");
    printf("1. Front\n");
    printf("2. Middle (enter any position)\n");
    printf("3. End\n");
    printf("Enter your choice: ");
    int choice;
    scanf("%d", &choice);

    if (choice == 1) {
        pos = 0;
    }
    else if (choice == 2) {
        printf("Enter the position (0 to %d): ", n);
        scanf("%d", &pos);
    }
    else if (choice == 3) {
        pos = n;
    }
    else {
        printf("Invalid choice!\n");
        return 0;
    }

    
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = value;  
    n++;  

    printf("\nArray after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

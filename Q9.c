#include <stdio.h>

int main() {
    int n, i, flag = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    for (i = 0; i < n; i++) {
        if (arr[i] == 99) {
            printf("First occurrence of score 99 is at index %d\n", i);
            flag = 1;
            break;
        }
    }

    if (!flag) {
        printf("Score 99 not found in the array.\n");
    }

    return 0;
}

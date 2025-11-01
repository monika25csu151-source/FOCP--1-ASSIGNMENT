#include <stdio.h>

int main() {
    int n, i;
    printf("Enter number of scores: ");
    scanf("%d", &n);

    int arr[n], even_array[n], odd_array[n];
    int even_count = 0, odd_count = 0;

    printf("Enter the scores:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even_array[even_count] = arr[i];
            even_count++;
        } else {
            odd_array[odd_count] = arr[i];
            odd_count++;
        }
    }

    
    printf("\nEven scores: ");
    for (i = 0; i < even_count; i++) {
        printf("%d ", even_array[i]);
    }

    
    printf("\nOdd scores: ");
    for (i = 0; i < odd_count; i++) {
        printf("%d ", odd_array[i]);
    }

    return 0;
}

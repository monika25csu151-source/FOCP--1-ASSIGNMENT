
#include <stdio.h>

void swapTemp(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swapArithmetic(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}


void swapXOR(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
void swapPointer(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("\nOriginal values: a = %d, b = %d\n", a, b);

    // Method 1
    swapTemp(&a, &b);
    printf("After Swap using Temporary Variable: a = %d, b = %d\n", a, b);

    
    swapTemp(&a, &b);

    // Method 2
    swapArithmetic(&a, &b);
    printf("After Swap using Arithmetic: a = %d, b = %d\n", a, b);

    // Restore again
    swapArithmetic(&a, &b);

    // Method 3
    swapXOR(&a, &b);
    printf("After Swap using XOR: a = %d, b = %d\n", a, b);

    // Restore again
    swapXOR(&a, &b);

    // Method 4
    swapPointer(&a, &b);
    printf("After Swap using Pointer Method: a = %d, b = %d\n", a, b);

    return 0;
}

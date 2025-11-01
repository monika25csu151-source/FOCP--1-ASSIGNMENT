#include <stdio.h>


int isPrime(int num) {
    if (num <= 1)
        return 0;  

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;  
    }
    return 1;  
}

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int prime_count = 0;

    
    for (i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            prime_count++;
        }
    }

    printf("\nTotal number of prime numbers = %d\n", prime_count);

    return 0;
}

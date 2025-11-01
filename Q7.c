#include <stdio.h>

int main() {
    int n = 5;   

    for (int i = 1; i <= n; i++) {
        // Print the left pattern
        for (int j = 1; j <= i; j++) {
            printf("%d", (j - 1) % 2);
        }

        
        if (i < n)
            printf(" ");

        
        if (i < n) {
            for (int j = 1; j <= i; j++) {
                printf("%d", (j - 1) % 2);
            }
        }

        printf("\n");
    }

    return 0;
}

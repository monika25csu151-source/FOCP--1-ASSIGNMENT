#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int cg, cp;
        scanf("%d %d", &cg, &cp);

        int n;
        scanf("%d", &n);

        int P1 = 0, P2 = 0;

        for (int i = 0; i < n; i++) {
            int x, y;
            scanf("%d %d", &x, &y);

            if (x == 1) P1++;  // solved problem 1
            if (y == 1) P2++;  // solved problem 2
        }

        long costA = (long)P1 * cg + (long)P2 * cp;
        long costB = (long)P1 * cp + (long)P2 * cg;

        long answer = (costA < costB) ? costA : costB;
        printf("%ld\n", answer);
    }

    return 0;
}
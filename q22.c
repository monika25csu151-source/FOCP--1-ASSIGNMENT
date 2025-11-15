#include <stdio.h>

int main() {
    char word[105];
    scanf("%s", word);

    int z = 0, o = 0;

    // Count Zs and Os
    for (int i = 0; word[i] != '\0'; i++) {
        if (word[i] == 'z' || word[i] == 'Z')
            z++;
        else if (word[i] == 'o' || word[i] == 'O')
            o++;
    }

    // Check condition
    if (o == 2 * z)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
#include <stdio.h>
#include <ctype.h>

int main() {
    char S[100005];
    scanf("%[^\n]%*c", S);  // read full string including spaces

    for (int i = 0; S[i] != '\0'; i++) {
        if (islower(S[i])) {
            S[i] = toupper(S[i]);
        } else if (isupper(S[i])) {
            S[i] = tolower(S[i]);
        }
    }

    printf("%s\n", S);
    return 0;
}

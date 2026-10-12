#include <stdio.h>

int main() {
    char s[200];
    int seen[26] = {0}, found = 0;
    fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i]; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            int k = s[i] - 'a';
            if (seen[k]) {
                printf("%c", s[i]);
                found = 1;
                break;
            }
            seen[k] = 1;
        }
    }

    if (!found)
        printf("-1");

    return 0;
}
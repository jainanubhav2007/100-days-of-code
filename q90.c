#include <stdio.h>

int main() {
    char s[200];
    fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i]; i++) {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32;
        else if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    }

    printf("%s", s);
    return 0;
}
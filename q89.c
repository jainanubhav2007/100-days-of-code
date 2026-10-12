#include <stdio.h>

int main() {
    char s[200], ch;
    int count = 0;

    fgets(s, sizeof(s), stdin);
    scanf(" %c", &ch);

    for (int i = 0; s[i]; i++)
        if (s[i] == ch)
            count++;

    printf("%d", count);
    return 0;
}
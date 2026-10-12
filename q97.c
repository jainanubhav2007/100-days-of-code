#include <stdio.h>
#include <ctype.h>

int main() {
    char s[200];
    fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i]; i++)
        if ((i == 0 || s[i-1] == ' ') && s[i] != ' ')
            printf("%c", toupper((unsigned char)s[i]));

    return 0;
}
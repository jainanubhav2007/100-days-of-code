#include <stdio.h>
#include <ctype.h>

int main() {
    char s[200];
    int spaces = 0, digits = 0, special = 0;
    fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i]; i++) {
        if (s[i] == ' ')
            spaces++;
        else if (isdigit((unsigned char)s[i]))
            digits++;
        else if (!isalpha((unsigned char)s[i]) && s[i] != '\n')
            special++;
    }

    printf("Spaces = %d\nDigits = %d\nSpecial = %d",
           spaces, digits, special);
    return 0;
}
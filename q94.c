#include <stdio.h>
#include <string.h>

int main() {
    char s[500], word[200], longest[200];
    int i = 0, j, max = 0;

    fgets(s, sizeof(s), stdin);

    while (s[i]) {
        while (s[i] == ' ' || s[i] == '\n')
            i++;

        j = 0;
        while (s[i] && s[i] != ' ' && s[i] != '\n')
            word[j++] = s[i++];

        word[j] = '\0';

        if (j > max) {
            max = j;
            strcpy(longest, word);
        }
    }

    if (max)
        printf("%s", longest);
    return 0;
}
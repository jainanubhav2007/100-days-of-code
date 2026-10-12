#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[200], *words[50];
    int n = 0;

    fgets(s, sizeof(s), stdin);
    char *p = strtok(s, " \n");

    while (p && n < 50) {
        words[n++] = p;
        p = strtok(NULL, " \n");
    }

    for (int i = 0; i < n - 1; i++)
        printf("%c. ", toupper((unsigned char)words[i][0]));

    if (n > 0)
        printf("%s", words[n-1]);

    return 0;
}
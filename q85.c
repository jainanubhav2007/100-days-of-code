#include <stdio.h>
#include <string.h>

int main() {
    char s[200], temp;
    fgets(s, sizeof(s), stdin);
    int n = strlen(s);

    if (n > 0 && s[n-1] == '\n')
        s[--n] = '\0';

    for (int i = 0; i < n/2; i++) {
        temp = s[i];
        s[i] = s[n-1-i];
        s[n-1-i] = temp;
    }

    printf("%s", s);
    return 0;
}
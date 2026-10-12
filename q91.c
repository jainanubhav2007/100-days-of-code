#include <stdio.h>

int main() {
    char s[200], r[200];
    int j = 0;
    fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i]; i++) {
        char c = s[i];
        if (!(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
              c=='A'||c=='E'||c=='I'||c=='O'||c=='U'))
            r[j++] = c;
    }

    r[j] = '\0';
    printf("%s", r);
    return 0;
}
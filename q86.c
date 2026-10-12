#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    int flag = 1;
    fgets(s, sizeof(s), stdin);
    int n = strlen(s);

    if (n > 0 && s[n-1] == '\n')
        s[--n] = '\0';

    for (int i = 0; i < n/2; i++)
        if (s[i] != s[n-1-i])
            flag = 0;

    printf("%s", flag ? "Palindrome" : "Not palindrome");
    return 0;
}
#include <stdio.h>
#include <string.h>

int main() {
    char s[500], temp;
    fgets(s, sizeof(s), stdin);
    int n = strlen(s), start = 0;

    for (int i = 0; i <= n; i++) {
        if (s[i] == ' ' || s[i] == '\n' || s[i] == '\0') {
            int end = i - 1;

            while (start < end) {
                temp = s[start];
                s[start++] = s[end];
                s[end--] = temp;
            }
            start = i + 1;
        }
    }

    printf("%s", s);
    return 0;
}
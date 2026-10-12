#include <stdio.h>
#include <string.h>

int main() {
    char a[200], b[200];
    int f[256] = {0};

    scanf("%199s %199s", a, b);

    if (strlen(a) != strlen(b)) {
        printf("Not anagrams");
        return 0;
    }

    for (int i = 0; a[i]; i++)
        f[(unsigned char)a[i]]++;

    for (int i = 0; b[i]; i++)
        f[(unsigned char)b[i]]--;

    for (int i = 0; i < 256; i++)
        if (f[i] != 0) {
            printf("Not anagrams");
            return 0;
        }

    printf("Anagrams");
    return 0;
}
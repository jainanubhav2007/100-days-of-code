#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    scanf("%99s", s);
    int n = strlen(s);

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            for (int k = i; k <= j; k++)
                printf("%c", s[k]);
            printf("\n");
        }
    }

    return 0;
}#include <stdio.h>

int main() {
    int n, a[1000], x, first = -1, last = -1;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &x);

    int l = 0, r = n - 1;

    while (l <= r) {
        int m = l + (r-l)/2;
        if (a[m] >= x)
            r = m - 1;
        else
            l = m + 1;
    }

    if (l < n && a[l] == x)
        first = l;

    l = 0;
    r = n - 1;

    while (l <= r) {
        int m = l + (r-l)/2;
        if (a[m] <= x)
            l = m + 1;
        else
            r = m - 1;
    }

    if (first != -1)
        last = r;

    printf("%d,%d", first, last);
    return 0;
}
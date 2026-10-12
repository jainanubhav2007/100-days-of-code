#include <stdio.h>

int main() {
    int n, a[1000], ans[1000];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int prefix = 1;

    for (int i = 0; i < n; i++) {
        ans[i] = prefix;
        prefix *= a[i];
    }

    int suffix = 1;

    for (int i = n-1; i >= 0; i--) {
        ans[i] *= suffix;
        suffix *= a[i];
    }

    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", ans[i]);
        if (i < n-1) printf(",");
    }
    printf("]");

    return 0;
}
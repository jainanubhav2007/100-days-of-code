#include <stdio.h>

int main() {
    int n, a[1000];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n; i++) {
        int ans = -1;

        for (int j = i+1; j < n; j++) {
            if (a[j] > a[i]) {
                ans = a[j];
                break;
            }
        }

        printf("%d", ans);
        if (i < n-1) printf(", ");
    }

    return 0;
}
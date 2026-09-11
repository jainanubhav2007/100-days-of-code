#include <stdio.h>

int main() {
    int n, i, pos, element;

    scanf("%d", &n);

    int a[n + 1];

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &element);
    scanf("%d", &pos);

    for (i = n; i > pos; i--)
        a[i] = a[i - 1];

    a[pos] = element;

    for (i = 0; i <= n; i++)
        printf("%d ", a[i]);

    return 0;
}
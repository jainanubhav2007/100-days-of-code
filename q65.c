#include <stdio.h>

int main() {
    int n, i, key;
    int low, high, mid, found = -1;

    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (a[mid] == key) {
            found = mid;
            break;
        }
        else if (a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if (found != -1)
        printf("Found at index %d", found);
    else
        printf("-1");

    return 0;
}
#include <stdio.h>

int main() {
    int n, a[1000], k;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &k);

    if (k <= 0 || k > n) {
        printf("Invalid k");
        return 0;
    }

    int sum = 0;

    for (int i = 0; i < k; i++)
        sum += a[i];

    int maxSum = sum;

    for (int i = k; i < n; i++) {
        sum += a[i] - a[i-k];

        if (sum > maxSum)
            maxSum = sum;
    }

    printf("%d", maxSum);
    return 0;
}
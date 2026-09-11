#include <stdio.h>

int main() {
    int n, i, even = 0, odd = 0;
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);

        if (a[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even=%d, Odd=%d", even, odd);

    return 0;
}#include <stdio.h>

int main() {
    int n, i, positive = 0, negative = 0, zero = 0;
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);

        if (a[i] > 0)
            positive++;
        else if (a[i] < 0)
            negative++;
        else
            zero++;
    }

    printf("Positive=%d, Negative=%d, Zero=%d",
           positive, negative, zero);

    return 0;
}
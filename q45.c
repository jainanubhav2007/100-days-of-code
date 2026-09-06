#include <stdio.h>

int main() {
    int n, i, numerator, denominator;
    float sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        numerator = 2 * i;
        denominator = 4 * i - 1;

        sum += (float)numerator / denominator;
    }

    printf("Sum = %.2f", sum);

    return 0;
}
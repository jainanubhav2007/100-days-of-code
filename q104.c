#include <stdio.h>

int main() {
    long long n, l = 1, r, x;
    scanf("%lld", &n);
    r = n;

    while (l <= r) {
        x = l + (r-l)/2;
        long long left = x * (x+1)/2;
        long long right = n*(n+1)/2 - (x-1)*x/2;

        if (left == right) {
            printf("%lld", x);
            return 0;
        } else if (left < right) {
            l = x + 1;
        } else {
            r = x - 1;
        }
    }

    printf("-1");
    return 0;
}
#include <stdio.h>

int main() {
    int n, first, last, digits, power, middle, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;

    power = 1;
    digits = n;

    while (digits >= 10) {
        digits = digits / 10;
        power = power * 10;
    }

    first = digits;

    middle = (n % power) / 10;

    result = last * power + middle * 10 + first;

    printf("Number after swapping = %d", result);

    return 0;
}
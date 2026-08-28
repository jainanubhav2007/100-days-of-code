#include <stdio.h>

int main() {
    int num, original, remainder, sum = 0;

    scanf("%d", &num);

    original = num;

    while (num != 0) {
        remainder = num % 10;
        sum = sum + remainder * remainder * remainder;
        num = num / 10;
    }

    if (sum == original)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");

    return 0;
}
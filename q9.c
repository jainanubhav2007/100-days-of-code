#include <stdio.h>
#include <math.h>

int main() {
    float P, R, T;
    float SI, CI;

    scanf("%f %f %f", &P, &R, &T);

    SI = (P * R * T) / 100;
    CI = P * pow((1 + R / 100), T) - P;

    printf("Simple Interest=%.0f, Compound Interest=%.2f", SI, CI);

    return 0;
}
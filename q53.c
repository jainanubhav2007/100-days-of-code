#include <stdio.h>

int main() {
    int i, j, spaces;

    for (i = 1; i <= 9; i++) {

        if (i <= 5)
            spaces = 5 - i;
        else
            spaces = i - 5;

        for (j = 1; j <= spaces; j++)
            printf(" ");

        if (i <= 5) {
            for (j = 1; j <= 2 * i - 1; j++)
                printf("*");
        } else {
            for (j = 1; j <= 2 * (10 - i) - 1; j++)
                printf("*");
        }

        printf("\n");
    }

    return 0;
}
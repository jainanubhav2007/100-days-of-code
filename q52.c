#include <stdio.h>

int main() {
    int i, j, stars[] = {1, 3, 5, 3, 1};

    for (i = 0; i < 5; i++) {
        for (j = 1; j <= stars[i]; j++) {
            printf("*\n");
        }
        printf("\n");
    }

    return 0;
}
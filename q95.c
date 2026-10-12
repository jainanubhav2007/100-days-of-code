#include <stdio.h>
#include <string.h>

int main() {
    char a[200], b[200], c[400];

    scanf("%199s %199s", a, b);

    if (strlen(a) != strlen(b)) {
        printf("Not rotation");
        return 0;
    }

    strcpy(c, a);
    strcat(c, a);

    if (strstr(c, b))
        printf("Rotation");
    else
        printf("Not rotation");

    return 0;
}
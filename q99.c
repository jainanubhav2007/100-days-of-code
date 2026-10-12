#include <stdio.h>

int main() {
    char date[30];
    int dd, mm, yyyy;

    scanf("%29s", date);
    sscanf(date, "%d/%d/%d", &dd, &mm, &yyyy);

    if (mm == 4)
        printf("%02d-Apr-%04d", dd, yyyy);
    else
        printf("Invalid month");

    return 0;
}
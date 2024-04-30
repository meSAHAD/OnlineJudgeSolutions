#include <stdio.h>

int main() {
    int num, first_digit;
    scanf("%d", &num);
    first_digit = num / 1000;

    if (first_digit % 2 == 0) {
        printf("EVEN\n");
    } else {
        printf("ODD\n");
    }

    return 0;
}

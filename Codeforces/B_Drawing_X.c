#include <stdio.h>

int main() {
    int total;
    scanf("%d", &total);
    for (int i = 1; i <= total; i++) {
        for (int z = 1; z <= total; z++) {
            if (i == z && i != (total + 1) / 2 && z != (total + 1) / 2) {
                printf("\\");
            } else if (i == (total + 1) / 2 && z == (total + 1) / 2) {
                printf("X");
            } else if (z != (total + 1) / 2 && i == (total + 1) - z) {
                printf("/");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}

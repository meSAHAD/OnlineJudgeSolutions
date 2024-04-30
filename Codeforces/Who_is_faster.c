#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int X, X1, Y, Y1;
        scanf("%d %d %d %d", &X, &X1, &Y, &Y1);
        float cat_speed = (float)X/X1;
        float person_speed = (float)Y/Y1;
        if (person_speed > cat_speed) {
            printf("YOU\n");
        } else if (cat_speed > person_speed) {
            printf("PUSSY\n");
        } else {
            printf("EQUAL\n");
        }
    }

    return 0;
}

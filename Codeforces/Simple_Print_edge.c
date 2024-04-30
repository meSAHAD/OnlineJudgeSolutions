#include <stdio.h>

#define PI 3.1416

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        float D;
        scanf("%f", &D);

        float r = D / 2;
        float s = r * PI* 2;

        printf("%.4f\n", s);
    }

    return 0;
}

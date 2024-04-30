#include <stdio.h>
#include <math.h>

int main() {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    double distance = sqrt(x*x + y*y + z*z);
    printf("%.15lf\n", distance);

    return 0;
}

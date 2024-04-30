#include <stdio.h>

int main()
{
    int m1, m2, d;
    scanf("%d %d %d", &m1, &m2, &d);
    int totaldays = m1 * d;
    int daysneeded = totaldays / m2;
    printf("%d", daysneeded);

    return 0;
}

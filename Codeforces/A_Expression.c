#include <stdio.h>
int main()
{
    int a, b, c;
    int p, q, r, s, t, u;
    int max;
    scanf("%d%d%d", &a, &b, &c);
    p = a * b * c;
    q = a + b + c;
    r = a * (b + c);
    s = (a + b) * c;
    t = a + b * c;
    u = a * b + c;
    max = p;
    if (q > max)
        max = q;
    if (r > max)
        max = r;
    if (s > max)
        max = s;
    if (t > max)
        max = t;
    if (u > max)
        max = u;
    printf("%d", max);
    return 0;
}

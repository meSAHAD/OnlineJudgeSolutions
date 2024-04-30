#include <stdio.h>
int main()
{
    int n, max = 0, min = 100, a, b;
    scanf("%d", &n);
    int m[n], i;
    for (i = 0; i < n; ++i)
    {
        scanf("%d", &m[i]);
        if (m[i] > max)
        {
            max = m[i];
            a = i;
        }
        if (m[i] <= min)
        {
            min = m[i];
            b = i;
        }
    }
    int c = i - b + a - 1;
    if (a > b)
        c -= 1;
    printf("%d", c);
    return 0;
}

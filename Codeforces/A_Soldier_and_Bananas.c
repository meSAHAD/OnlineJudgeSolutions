#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d ", &a, &b, &c);
    long long int cost = ((c * (c + 1)) / 2) * a;
    long long int ans = cost - b;
    if (ans < 0)
        ans = 0;
    printf("%lld", ans);
    return 0;
}
#include <stdio.h>
int main()
{
    long long n, m, x;
    scanf("%lld%lld%lld", &n, &m, &x);
    n = (n + x - 1) / x;
    m = (m + x - 1) / x;
printf("%lld\n", n*m);
return 0;
}
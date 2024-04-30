#include <stdio.h>

int main()
{
    long long n, m, k, counter = 0, check;
    scanf("%lld %lld %lld", &n, &m, &k);

    if (n == 0)
        printf("0");
    else if (n == 1)
        printf("1");
    else
    {
        check = (n < m && n < k) ? n : (m < k ? m : k);
        counter += check;
        n -= check;
        m -= check;
        k -= check;
        n /= 2;
        check = (n < k) ? n : k;
        counter += check;
        printf("%lld", counter);
    }

    return 0;
}

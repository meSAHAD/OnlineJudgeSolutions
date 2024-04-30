#include <stdio.h>
long long sumNatural(long long n)
{
    long long sum = (n * (n + 1)) / 2;
    return sum;
}
long long sumInRange(long long l, long long r)
{
    return sumNatural(r) - sumNatural(l - 1);
}
int main()
{
    long long times, st, nd, sum = 0;
    scanf("%lld", &times);

    for (int i = 1; i <= times; i++)
    {
        scanf("%lld %lld", &st, &nd);
        if (st < nd)
        {
            sum = sumInRange(st, nd);
            printf("%lld\n", sum);
            sum = 0;
        }
        else
        {
            sum = sumInRange(nd, st);
            printf("%lld\n", sum);
            sum = 0;
        }
    }

    return 0;
}

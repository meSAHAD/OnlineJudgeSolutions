#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long num;
        scanf("%lld", &num);
        printf("%lld\n", num * 4 + num * (num - 2) + 2);
    }
    return 0;
}
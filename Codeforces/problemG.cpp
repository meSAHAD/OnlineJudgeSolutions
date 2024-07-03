#include<bits/stdc++.h>
using namespace std;

long long F(long long x)
{
    long long ans = 0;
    for (int i = 1; i <= x; i++)
    {
        ans += sqrt((x * x - i * i));
    }
    return x * 4 + 4 * ans + 1;
}
int main()
{
    long long k;
    cin >> k;
    long long l = 1, r = 1e5 + 100;
    while (l < r)
    {
        long long mid = (l + r) >> 1;
        if (F(mid) >= k)
        {
            r = mid;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << l;
    return 0;
}
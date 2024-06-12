#include <bits/stdc++.h>
using namespace std;

int f(int n)
{
    int ret = 0;
    while (n)
    {
        ret += n % 10;
        n /= 10;
    }
    return ret;
}

long long poww(long long x, long long n, long long mod)
{
    long long res = 1;
    while (n > 0)
    {
        if (n & 1)
            res = res * x % mod;
        x = x * x % mod;
        n >>= 1;
    }
    return res;
}

void solve()
{
    int l, r, k;
    cin >> l >> r >> k;
    int mod = 1e9 + 7;

    if (k >= 10)
        return void(cout << 0);

    long long d = 9 / k;

    long long ans = poww(d + 1, r, mod) - poww(d + 1, l, mod);

    ans = (ans % mod + mod) % mod;

    cout << ans;
}

int main()
{
    int test_cases = 1;
    cin >> test_cases;
    for (int i = 1; i <= test_cases; i++)
    {
        solve();
        cout << endl;
    }
}

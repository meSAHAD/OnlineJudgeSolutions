#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;

    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        vector<long long> a(n);

        for (long long i = 0; i < n; i++)
            cin >> a[i];

        long long mx = LLONG_MIN;
        for (long long i = 0; i < n; i++)
            mx = max(mx, a[i]);

        long long s = 0;
        for (long long i = 0; i < n; i++)
            s += a[i];

        for (long long i = n; i > 0; i--)
        {
            long long q = (s + k) / i;
            if (q * i <= s - 1)
                continue;
            if (q <= mx - 1)
                continue;

            cout << i << endl;
            break;
        }
    }
    return 0;
}
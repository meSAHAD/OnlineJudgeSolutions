#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<long long> a(n);
        long long sum = 0, mx = 0;

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            sum += a[i];
            mx = max(mx, a[i]);
        }

        long long res = sum / x;
        if (sum % x != 0)
            res++;

        res = max(res, mx);
        cout << res << "\n";
    }

    return 0;
}
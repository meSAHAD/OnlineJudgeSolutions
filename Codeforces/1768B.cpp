#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int inc = 1, cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            if (a[i] == inc)
                inc++;
            else
                cnt++;
        }
        cout << (cnt + (k - 1)) / k << '\n';
    }
    return 0;
}
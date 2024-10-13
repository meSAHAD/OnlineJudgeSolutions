#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        vector<ll> a(n), b(q);
        for (ll i = 0; i < n; ++i)
            cin >> a[i];
        for (ll i = 0; i < q; ++i)
            cin >> b[i];
        unordered_map<ll, ll> f;
        for (ll c = 1; c <= n; ++c)
        {
            ll k = (c - 1) * (n - c + 1) + (n - c);
            f[k]++;
            if (c < n)
            {
                ll d = a[c] - a[c - 1] - 1;
                if (d > 0)
                    f[c * (n - c)] += d;
            }
        }
        for (ll i = 0; i < q; ++i)
        {
            cout << f[b[i]] << (i < q - 1 ? " " : "\n");
        }
    }

    return 0;
}

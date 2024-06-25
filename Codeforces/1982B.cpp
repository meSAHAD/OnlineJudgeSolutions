#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll x, y, k;
        cin >> x >> y >> k;

        while (k)
        {
            if (x < y)
            {
                x = (x - 1 + k) % (y - 1) + 1;
                break;
            }

            ll l = 1, r = 1e9;
            while (l < r)
            {
                ll mid = (l + r) / 2;
                if (mid * y > x)
                    r = mid;
                else
                    l = mid + 1;
            }

            ll need = l * y - x;
            if (need > k)
            {
                x += k;
                break;
            }

            k -= need;
            x = l;

            while (x % y == 0)
                x /= y;
        }

        cout << x << endl;
    }

    return 0;
}

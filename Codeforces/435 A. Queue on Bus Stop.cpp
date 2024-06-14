#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m, a[101];

    cin >> n >> m;
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long ans = 0;
    for (long long i = 0; i < n; i++)
    {
        if (a[i] == 0)
            continue;
        int j = i + 1;
        if (j != n && a[i] < m)
        {
            while (a[i] < m)
            {
                if (j == n)
                    break;
                if (a[i] + a[j] <= m)
                {
                    a[i] += a[j];
                    a[j] = 0;
                }
                else
                {
                    break;
                }
                j++;
            }
        }
        if (a[i] <= m)
        {
            ans++;
            a[i] = 0;
        }
        else if (a[i] > m)
        {
            int div = a[i] / m;
            ans += div;
            a[i] -= (div * m);
            if (i + 1 == n && a[i] > 0)
            {
                ans++;
            }
            else
            {
                a[i + 1] = a[i];
            }
            a[i] = 0;
        }
    }

    cout << ans << endl;
    return 0;
}
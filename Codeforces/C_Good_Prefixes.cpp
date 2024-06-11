#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long a[n];
        for (long long i = 0; i < n; i++)
            cin >> a[i];

        long long ans = 0;
        set<long long> s;

        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            s.insert(a[i]);
            sum += a[i];

            long long highest_ele = *(--s.end());
            if (highest_ele == (sum - highest_ele))
            {
                ans += 1;
            }
        }

        cout << ans << endl;
    }
}
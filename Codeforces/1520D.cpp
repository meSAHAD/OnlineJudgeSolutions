#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, x;
    cin >> t;
    while (t--)
    {
        cin >> n;
        map<int, int> mp;
        long long a = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> x;
            a += mp[x - i]++;
        }
        cout << a << endl;
    }
}
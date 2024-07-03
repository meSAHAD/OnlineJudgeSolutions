#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        int mi = 21;
        long long ans = (1e9 - 1), sol = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mi = min(mi, v[i]);
        }
        ans = mi * ans;
        for (int i = 0; i < n; i++)
            sol += ans / v[i] + 1;
        if (sol > ans)
        {
            cout << -1;
        }
        else
        {
            for (int i = 0; i < n; i++)
                cout << ((int)(ans / v[i])) + 1 << " ";
        }
        cout << endl;
    }
}
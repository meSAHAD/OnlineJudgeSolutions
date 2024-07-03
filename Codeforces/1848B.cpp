#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        vector<vector<int>> V(k + 1);
        for (int i{}, c; i < n; i++)
        {
            cin >> c;
            V[c].push_back(i);
        }
        int best{n};
        for (auto &v : V)
        {
            v.push_back(n);
            int a{}, b{}, pos{-1};
            for (auto c : v)
            {
                auto step{c - pos - 1};
                pos = c;
                if (step >= a)
                {
                    b = a;
                    a = step;
                }
                else if (step >= b)
                    b = step;
            }
            best = min(best, max(a / 2, b));
        }
        cout << best << '\n';
    }
}
#include <bits/stdc++.h>
using namespace std;

int smCtr(vector<int> &a, int b)
{
    int c = 0;
    int s = accumulate(a.begin(), a.end(), 0);
    for (int i = 0; i < a.size(); i++)
    {
        if (!(a[i] & 1))
            c += a[i];
        else
        {
            if (s < 2 * b)
            {
                c += a[i];
                s++;
            }
            else
                c += a[i] - 1;
        }
    }
    return c;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, b;
        cin >> n >> b;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        cout << smCtr(a, b) << "\n";
    }
    return 0;
}

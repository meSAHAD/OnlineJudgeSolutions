#include<bits/stdc++.h>
using namespace std;

int scor(const vector<int> &a, int n, int start)
{
    int maxi = 0;
    int cnt = 0;
    for (int i = start; i < n; i += 2)
    {
        maxi = max(maxi, a[i]);
        cnt++;
    }
    return maxi + cnt;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        int frm0 = scor(a, n, 0);
        int frm1 = scor(a, n, 1);

        cout << max(frm0, frm1) << endl;
    }
    return 0;
}
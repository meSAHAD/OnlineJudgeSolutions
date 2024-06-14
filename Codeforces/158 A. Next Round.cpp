#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, a[100], d = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (k == i)
        {
            d = a[i];
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] >= d && a[i] > 0)
        {
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}
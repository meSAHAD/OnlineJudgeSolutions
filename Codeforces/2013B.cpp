#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> arr(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        long long s = 0;
        for (int i = 0; i < n - 2; ++i)
        {
            s += arr[i];
        }

        long long res = arr[n - 2] - s;
        res = arr[n - 1] - res;

        cout << res << '\n';
    }
    return 0;
}
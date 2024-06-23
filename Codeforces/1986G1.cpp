//this code got TLE, not optimal

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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int res = 0;
        for (int i = 1; i < n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                if ((arr[i - 1] * arr[j - 1]) % (i * j) == 0)
                {
                    res++;
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}

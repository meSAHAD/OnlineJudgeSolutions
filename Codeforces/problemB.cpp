#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long m;
        cin >> m;
        string num;
        cin >> num;
        long long cnt = 0, sum = 0;
        vector<int> rem(3, 0);
        rem[0] = 1;
        for (int i = 0; i < m; i++)
        {
            sum += num[i] - '0';
            cnt += rem[sum % 3];
            rem[sum % 3]++;
        }
        cout << cnt << endl;
    }
    return 0;
}
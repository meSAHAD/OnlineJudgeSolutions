#include <bits/stdc++.h>
using namespace std;

long long count_odd(long long x)
{
    return (x + 1) / 2;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, k;
        cin >> n >> k;

        long long start = n - k + 1;
        long long odCnt = count_odd(n) - count_odd(start - 1);

        if (odCnt % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}

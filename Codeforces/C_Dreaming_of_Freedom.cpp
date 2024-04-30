#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long
void primeFactors(int n, int m)
{
    if (n % 2 == 0)
    {
        if (m >= 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
        return;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {

        if (n % i == 0)
        {
            if (m >= i)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
            return;
        }
    }

    cout << "YES" << endl;
    return;
}
void sol()
{

    int n, m;
    cin >> n >> m;
    if (m >= n && n != 1)
    {
        cout << "NO" << endl;
        return;
    }
    primeFactors(n, m);
    return;
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        sol();
    }
    return 0;
}
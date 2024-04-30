#include <bits/stdc++.h>
using namespace std;
void kt(long long n)
{
    while (n % 2 == 0)
    {
        n = n / 2;
    }
    if (n == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}
int main()
{
    long long t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        kt(n);
    }
    return 0;
}
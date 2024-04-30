#include <bits/stdc++.h>
using namespace std;
int a[40], b[40];

int main()
{
    long long t, a, b, n, s;
    cin >> t; // t = number of test cases.
    while (t--)
    {
        cin >> a >> b >> n >> s;
        if (s % n <= b && s <= a * n + b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl; // either b or a*n+b is greater than s.
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, x, y;
        cin >> n >> x >> y;
        long long s = min(x, y);
        cout << (n + s - 1) / s << endl;
    }
    return 0;
}
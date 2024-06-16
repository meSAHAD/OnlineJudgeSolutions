#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long numBun, usualPrice, modiPrice;
        cin >> numBun >> usualPrice >> modiPrice;
        long long k = (modiPrice - usualPrice);
        if (k < 0)
            k = 0;
        if (k > numBun)
            k = numBun;
        long long sm = (2 * modiPrice - k + 1);
        sm = (k * sm) / 2;
        numBun -= k;
        if (numBun > 0)
            sm += numBun * usualPrice;
        cout << sm << endl;
    }
}
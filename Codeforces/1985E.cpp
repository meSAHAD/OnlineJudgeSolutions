#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, y, z, a, maxx = 0;
        long long k;
        cin >> x >> y >> z >> k;
        for (long long i = 1; i <= x; i++)
        {
            for (long long j = 1; j <= y; j++)
            {
                if (k % (i * j) == 0 && k / (i * j) <= z)
                {
                    a = k / (i * j);
                    maxx = max(maxx, (x - i + 1) * (y - j + 1) * (z - a + 1));
                }
            }
        }
        cout << maxx << endl;
    }
}
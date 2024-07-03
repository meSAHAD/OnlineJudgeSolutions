#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long flw;
        cin >> flw;
        long long maxx = 0;
        for (int i = 0; i < flw; i++)
        {
            long long h;
            cin >> h;
            //only comparing h doesn't give it
            maxx = max(h + i, maxx);
        }
        cout << maxx << endl;
    }
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    while (cin >> m)
    {
        while (m--)
        {
            int x, y;
            cin >> x >> y;
            int cnt = y / (x - 1) * x;
            y % (x - 1) == 0 ? cnt-- : cnt += (y % (x - 1));
            printf("%d\n", cnt);
        }
    }
    return 0;
}
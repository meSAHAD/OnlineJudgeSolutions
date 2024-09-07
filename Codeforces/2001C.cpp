
#include <bits/stdc++.h>
using namespace std;

int T, n, x, fa[1145];
int main()
{
    cin >> T;
    while (T--)
    {
        cin >> n;
        for (int i = 2; i <= n; i++)
        {
            x = 1;
            while (x != i)
            {
                fa[i] = x;
                cout << "? " << i << " " << fa[i] << endl;
                cin >> x;
            }
        }
        cout << "! ";
        for (int i = 2; i <= n; i++)
        {
            cout << fa[i] << " " << i << " ";
        }
        cout << endl;
    }
}
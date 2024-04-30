#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c = 0;
    string team, winner;
    cin >> n;
    while (n--)
    {
        if (c != 0)
        {
            cin >> team;
            if (team == winner)
                c++;
            else
                c--;
        }
        else
        {
            cin >> winner;
            c++;
        }
    }
    cout << winner;
    return 0;
}
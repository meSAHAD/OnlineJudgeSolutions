#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n, four = 0, seven = 0, fourty7 = 0;

    cin >> s;
    n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '4')
            four++;
        else if (s[i] == '7')
            seven++;
        else if ((s[i] == '4' && s[i + 1] == '7') && (i + 1 < n))
            fourty7++;
    }
    if ((four == 0 && seven == 0) && (fourty7 == 0))
    {
        cout << -1 << endl;
    }
    else
    {
        int ans = 0;
        ans = max(four, max(seven, fourty7));

        if (ans == four)
            cout << 4 << endl;
        else if (ans == seven)
            cout << 7 << endl;
        else if (four == seven)
            cout << 4 << endl;
        else
            cout << 47 << endl;
    }
    return 0;
}
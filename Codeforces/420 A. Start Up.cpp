#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    bool flag = false, Check = false;
    string s, t;
    cin >> s;
    n = s.length();
    for (long long i = 0; i < n; i++)
    {
        if (s[i] == 'A' || s[i] == 'H' || s[i] == 'I' || s[i] == 'M' || s[i] == 'O' || s[i] == 'T' || s[i] == 'U' || s[i] == 'V' || s[i] == 'W' || s[i] == 'X' || s[i] == 'Y')
        {
            Check = true;
        }
        else
        {
            Check = false;
            break;
        }
    }
    if (Check)
    {
        t = s;
        reverse(t.begin(), t.end());
        for (long long i = 0; i < n; i++)
        {
            if (s[i] == t[i])
            {
                flag = true;
            }
            else
            {
                flag = false;
                break;
            }
        }
    }

    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
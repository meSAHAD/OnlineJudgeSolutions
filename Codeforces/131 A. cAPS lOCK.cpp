#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    string s, t;
    cin >> s;
    n = s.length();

    bool flag = false;
    if (n == 1)
    {
        if (s[0] >= 'a' && s[0] <= 'z')
        {
            char c = toupper(s[0]);
            cout << c;
        }
        else
        {
            char c = tolower(s[0]);
            cout << c;
        }
        cout << endl;
        return 0;
    }
    for (long long i = 1; i < n; i++)
    {
        if (s[0] >= 'a' && s[0] <= 'z')
        {
            for (long long j = i; j < n; j++)
            {
                if (s[j] >= 'A' && s[j] <= 'Z')
                {
                    t += s[j];
                    flag = true;
                }
                else
                {
                    flag = false;
                    break;
                }
            }
        }
        break;
    }
    if (flag)
    {
        transform(t.begin(), t.end(), t.begin(), ::tolower);
        char c = toupper(s[0]);
        cout << c;
        for (long long i = 0; i < t.length(); i++)
            cout << t[i];
        cout << endl;
    }
    else
    {
        for (long long i = 1; i < n; i++)
        {
            if (s[0] >= 'A' && s[0] <= 'Z')
            {
                for (long long j = i; j < n; j++)
                {
                    if (s[j] >= 'A' && s[j] <= 'Z')
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
            break;
        }
        if (flag)
        {
            transform(s.begin(), s.end(), s.begin(), ::tolower);
            cout << s << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
    return 0;
}
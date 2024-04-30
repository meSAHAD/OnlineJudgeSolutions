#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    string s;
    while (cin >> s)
    {
        ll c = 0, a = 0, b = 0, k = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
                a++;
            else if (s[i] >= 'A' && s[i] <= 'Z')
                b++;
            else
                c++;
            if (a != 0 && b != 0 && c != 0)
            {
                k++;
                a = 0;
                b = 0;
                c = 0;
            }
        }
        cout << k << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 1;
        cin >> n;
        string str;
        cin >> str;
        for (int i = 2; i < n; i++)
        {
            if (str[i] != str[i - 2])
                count++;
        }
        cout << count << endl;
    }
    return 0;
}
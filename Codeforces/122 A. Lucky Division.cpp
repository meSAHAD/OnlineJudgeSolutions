#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n;
    cin >> n;
    if (n % 4 == 0 || n % 7 == 0 || n % 47 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        bool flag = true;
        long long mod = 0, div = 0;
        while (n > 0)
        {
            mod = n % 10;
            n /= 10;
            if (mod == 4 || mod == 7)
            {
                flag = true;
            }
            else
            {
                flag = false;
                break;
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
    }
    return 0;
}
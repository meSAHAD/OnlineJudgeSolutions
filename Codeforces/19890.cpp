#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (b < -1)
            cout << "NO";
        else
            cout << "YES";
        cout << endl;
    }
    return 0;
}
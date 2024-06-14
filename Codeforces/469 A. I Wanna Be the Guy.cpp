#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, p, a;
    set<int> s;
    cin >> n;
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        cin >> a;
        s.insert(a);
    }
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        cin >> a;
        s.insert(a);
    }
    if (n == s.size())
    {
        cout << "I become the guy.\n";
    }
    else
    {
        cout << "Oh, my keyboard!\n";
    }
    return 0;
}
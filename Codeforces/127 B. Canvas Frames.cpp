#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a[101], d;
    map<int, int> mp;
    map<int, int>::iterator itr;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        mp[a[i]]++;
    }
    int ans = 0, two = 0, four = 0;
    for (itr = mp.begin(); itr != mp.end(); itr++)
    {
        d = itr->second;
        if (d >= 2)
        {
            two += (d / 2);
        }
    }
    ans = two / 2;
    cout << ans << endl;
    return 0;
}
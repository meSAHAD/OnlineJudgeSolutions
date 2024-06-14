#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, c = 0, ans = 1;
    string h, m, s;
    map<string, int> mp;
    map<string, int>::iterator itr;
    cin >> n;
    for (long long i = 0; i < n; i++)
    {
        cin >> h >> m;
        s = h + '_' + m;
        mp[s]++;
    }
    for (itr = mp.begin(); itr != mp.end(); itr++)
    {
        c = itr->second;
        ans = max(ans, c);
    }
    cout << ans << endl;
    return 0;
}
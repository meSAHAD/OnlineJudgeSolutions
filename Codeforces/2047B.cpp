#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t;
    int n, m;
    int cnt[30];
    while (t--)
    {
        memset(cnt, 0, sizeof cnt);
        cin >> n;
        string s;
        cin >> s;
        int maxx = 0;
        char pos;
        int minx = 10000005;
        for (int i = 0; i < s.size(); i++)
        {
            cnt[s[i] - 'a']++;
        }
        for (int i = 0; i < s.size(); i++)
        {
            maxx = max(maxx, cnt[s[i] - 'a']);
            minx = min(minx, cnt[s[i] - 'a']);
        }
        for (int i = 0; i < 26; i++)
            if (cnt[i] == maxx)
            {
                pos = (char)('a' + i);
                break;
            }
        for (int i = s.size() - 1; i >= 0; i--)
            if (cnt[s[i] - 'a'] == minx && s[i] != pos)
            {
                s[i] = pos;
                break;
            }

        cout << s << endl;
    }
    return 0;
}
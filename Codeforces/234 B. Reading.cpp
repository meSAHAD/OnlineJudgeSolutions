#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, k, a;

    cin >> n >> k;
    vector<pair<int, int>> v;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        v.push_back(make_pair(a, i));
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    cout << v[k - 1].first << endl;
    for (int i = 0; i < k; i++)
    {
        cout << v[i].second << " ";
    }
    cout << endl;
    return 0;
}
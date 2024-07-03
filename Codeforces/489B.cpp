#include <bits/stdc++.h>
using namespace std;

int e;
int main()
{
    int n, m;
    cin >> n;
    vector<int> v1;
    vector<int> v2;
    for (int i = 0; i < n; i++)
    {
        int q;
        cin >> q;
        v1.push_back(q);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int q;
        cin >> q;
        v2.push_back(q);
    }

    for (int i = 0; i < n; i++)
    {
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        for (int l = 0; l < m; l++)
        {
            if (v1[i] + 1 == v2[l] || v1[i] == v2[l] || v1[i] - 1 == v2[l])
            {
                e++;
                v1[i] = -3;
                v2[l] = -3;
            }
        }
    }
    cout << e;
}
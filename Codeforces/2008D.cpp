#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> p(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> p[i];
        p[i]--;
    }

    vector<int> F(n, 0);
    vector<bool> visited(n, false);

    string s;
    cin >> s;

    for (int i = 0; i < n; ++i)
    {
        if (!visited[i])
        {
            vector<int> cycle;
            int black_count = 0;
            int x = i;

            while (!visited[x])
            {
                visited[x] = true;
                cycle.push_back(x);
                if (s[x] == '0')
                {
                    black_count++;
                }
                x = p[x];
            }

            for (int idx : cycle)
            {
                F[idx] = black_count;
            }
        }
    }

    for (int i = 0; i < n; ++i)
    {
        cout << F[i] << " ";
    }
    cout << endl;
    return 0;
}
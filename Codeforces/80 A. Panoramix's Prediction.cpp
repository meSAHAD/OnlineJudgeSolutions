#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int N = 1, M = 51;
    vector<int> v;
    while (N < M)
    {
        int flag = 0;
        for (int i = 2; i <= N / 2; i++)
        {
            if (N % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            v.push_back(N);

        N++;
    }
    int flag = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if ((v[i] == n) && (v[i + 1] == m))
        {
            flag = 1;
            break;
        }
        else
            flag = 0;
    }
    if (flag == 0)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
    }
    return 0;
}
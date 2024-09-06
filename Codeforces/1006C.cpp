#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    deque<int> q;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push_back(x);
    }

   long long su1 = 0, su2 = 0, res = 0;
    while (!q.empty())
    {
        if (su1 > su2)
        {
            su2 += q.back();
            q.pop_back();
        }
        else
        {
            su1 += q.front();
            q.pop_front();
        }

        if (su1 == su2)
        {
            res = su1;
        }
    }

    cout << res;

    return 0;
}
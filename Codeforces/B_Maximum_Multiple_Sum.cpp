#include<bits/stdc++.h>
using namespace std;

int findOptimalX(int n)
{
    int optimalX = 2;
    int maxSum = 0;

    for (int x = 2; x <= n; ++x)
    {
        int sum = 0;
        for (int k = 1; k * x <= n; ++k)
        {
            sum += k * x;
        }

        if (sum > maxSum)
        {
            maxSum = sum;
            optimalX = x;
        }
    }

    return optimalX;
}

int main()
{
    int t;
    cin >> t;
    vector<int> results;

    for (int i = 0; i < t; ++i)
    {
        int n;
        cin >> n;
        results.push_back(findOptimalX(n));
    }

    for (int result : results)
    {
        cout << result << endl;
    }
    return 0;
}
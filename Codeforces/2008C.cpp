#include<bits/stdc++.h>
using namespace std;

int main()
{
     int t;
    cin >> t;

    while (t--)
    {
        long long l, r;
        cin >> l >> r;

        int maxLength = 1;
        long long currentSum = 0;

        while (true)
        {
            if (currentSum +maxLength  <= abs(l-r))
            {
                currentSum += maxLength;
                maxLength++;
            }
            else
            {
                break;
            }
        }
        cout << maxLength  << endl;
    }
    return 0;
}
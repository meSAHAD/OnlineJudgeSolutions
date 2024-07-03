#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int totalGBs, timWIn;
        cin >> totalGBs >> timWIn;
        long long int ms = totalGBs * timWIn;
        ms -= (timWIn - 1);
        cout << ms << endl;
    }
    return 0;
}
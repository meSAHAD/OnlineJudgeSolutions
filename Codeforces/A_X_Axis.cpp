#include<bits/stdc++.h>
using namespace std;

int calculateMinDistance(int x1, int x2, int x3)
{
    vector<int> points = {x1, x2, x3};
    sort(points.begin(), points.end());
    int a = points[1];
    int totalDistance = abs(x1 - a) + abs(x2 - a) + abs(x3 - a);
    return totalDistance;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x1, x2, x3;
        cin >> x1 >> x2 >> x3;

        cout << calculateMinDistance(x1, x2, x3) << endl;
    }
    return 0;
}
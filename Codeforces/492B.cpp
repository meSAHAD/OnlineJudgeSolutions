#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, l;
    cin >> n >> l;

    vector<int> lanterns(n);
    for (int i = 0; i < n; i++)
    {
        cin >> lanterns[i];
    }

    sort(lanterns.begin(), lanterns.end());

    double max_distance = 0;
    for (int i = 0; i < n - 1; i++)
    {
        max_distance = max(max_distance, (double)(lanterns[i + 1] - lanterns[i]));
    }

    max_distance = max(max_distance, (double)2 * max(lanterns[0], l - lanterns[n - 1]));

    cout << fixed << setprecision(10) << max_distance / 2 << endl;
    return 0;
}
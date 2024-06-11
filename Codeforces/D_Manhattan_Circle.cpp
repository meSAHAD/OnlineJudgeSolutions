#include<bits/stdc++.h>
using namespace std;

pair<int, int> fmc(const vector<string> &grid, int n, int m)
{
    int minRow = n, maxRow = 0, minCol = m, maxCol = 0;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (grid[i][j] == '#')
            {
                if (i < minRow)
                    minRow = i;
                if (i > maxRow)
                    maxRow = i;
                if (j < minCol)
                    minCol = j;
                if (j > maxCol)
                    maxCol = j;
            }
        }
    }

    int centerX = (minRow + maxRow) / 2 + 1;
    int centerY = (minCol + maxCol) / 2 + 1;
    return {centerX, centerY};
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> grid(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> grid[i];
        }

        pair<int, int> center = fmc(grid, n, m);
        cout << center.first << " " << center.second << endl;
    }
    return 0;
}
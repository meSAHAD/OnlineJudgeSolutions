#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int books[n];
        int mxPage = 0;
        for (int i = 0; i < n; i++)
            cin >> books[i];
        for (int i = 0; i < n - 1; i++)
        {
            if (mxPage < (books[i] + books[n - 1]))
                mxPage = books[i] + books[n - 1];
        }
        cout << mxPage << endl;
    }
    return 0;
}
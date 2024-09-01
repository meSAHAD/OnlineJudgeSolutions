// not accepted


#include <iostream>
#include <cmath>
#include <string>
using namespace std;

bool isBeautifulSquareMatrix(const string &s, int n)
{
    int r = sqrt(n);
    if (r * r != n)
        return false;

    for (int i = 0; i < r; ++i)
    {
        if (s[i] != '1' || s[n - r + i] != '1')
            return false;
    }

    for (int i = 1; i < r - 1; ++i)
    {
        if (s[i * r] != '1' || s[i * r + r - 1] != '1')
            return false;
    }

    for (int j = 1; j < r - 1; ++j)
    {
        if (s[j * r + j] != '0')
            return false;
    }

    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        if (isBeautifulSquareMatrix(s, n))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}

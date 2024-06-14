#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long a, b, c;
    cin >> a >> b >> c;

   long long total = 0, will = 0, need = 0, ans = 0;
    total = a * c;
    will = b * c;
    need = total - will;
    ans = (need / b);
    if (need % b != 0)
    {
        ans++;
    }

    cout << ans << endl;
    return 0;
}
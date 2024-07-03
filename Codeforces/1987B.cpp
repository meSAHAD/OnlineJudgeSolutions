#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--){
        long long n;
        cin >> n;
        long long maxx = 0, tolC = 0, mxDif = 0;
        for (long long i = 0; i < n; i++){
            long long x;
            cin >> x;
            if (x < maxx){
                tolC += maxx - x;
                mxDif = max(mxDif, maxx - x);
            }
            maxx = max(maxx, x);
        }
        cout << tolC + mxDif << endl;
    }
    return 0;
}

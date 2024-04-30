#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,z,count=0;
    cin >> x>>y>>z;
    for(int i = y+1; i<=x; i++)
    {
        if(x-i<=z) count++;
    }
    cout << count;
    return 0;
}
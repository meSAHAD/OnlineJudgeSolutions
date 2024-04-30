#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define loop(n) for(long long i=0;i<n;i++)
#define rloop(n) for(long long i=n-1;i>=0;i--)
ll m=1e9+7;

long long binpow(long long a, long long b) {
if (b == 0)
return 1;
long long res = binpow(a, b / 2);
if (b % 2)
return (res%m * res%m * a)%m;
else
return res%m * res%m;
}
signed main(){

int test_cases;
cin>>test_cases;
while(test_cases--){

ll n;
cin>>n;

ll a[n];
loop(n)cin>>a[i];

ll x=0,ans=0;
loop(n/2){
x=abs(a[i]-a[n-i-1]);
if(x==0)continue;
if(i==0)ans=x;
else
ans=__gcd(x,ans);
}

cout<<ans<<"\n";

}
return 0;
}
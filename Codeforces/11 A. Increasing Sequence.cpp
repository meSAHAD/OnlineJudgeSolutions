#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ans=0;
    int d,a[100010];
    int n;
    cin>>n>>d;
    for(int i=0; i<n;i++){
        cin>>a[i];

    }
    for(int i=1;i<n;i++){
        if(a[i-1]>=a[i]){
            int t= a[i-1]-a[i];
            if(t<d){
                ans++;
                a[i]+=d;
            }
            if(t==d){
                ans+=2;
                a[i]+=2*d;
            }
            if(t>d){
                ans+=t/d+1;
                a[i]+=(t/d+1)*d;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
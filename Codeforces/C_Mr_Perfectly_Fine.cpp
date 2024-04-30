#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long

void sol(){

int n;
cin>>n;

vector<int> a,b,c,d;

for(int i=0;i<n;i++){

int x;
cin>>x;
string s;
cin>>s;

if(s=="00"){
a.push_back(x);
}
else if(s=="10"){
b.push_back(x);
}
else if(s=="01"){
c.push_back(x);
}
else{
d.push_back(x);
}

}

int m=INT_MAX,f=0;
if(d.size()!=0){
int x = *min_element(d.begin(),d.end());
f=1;
m = x;
}

if(b.size()!=0&&c.size()!=0){
int x = *min_element(c.begin(),c.end());
int y = *min_element(b.begin(),b.end());

if(x+y<m) m = x+y;
f=1;
}

if(f==1){
cout<<m<<endl;
}
else{
cout<<-1<<endl;
}

return;
}

signed main() {

int t;
cin>>t;

while(t--){
sol();
}

return 0;
}
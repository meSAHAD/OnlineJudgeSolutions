#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long

void sol(){
string s;
cin>>s;


int count=0;
int n = s.size();

if(n==1){
if(s[0]=='^') count++;
}
if(s[0]=='_') count++;
if(s[s.size()-1]=='_') count++;
for(int i=0;i<n-1;i++){
if(s[i]=='_'&&s[i+1]=='_') count++;
}

cout<<count<<endl;
return;
}

signed main()
{

int test;
cin>>test;

while(test--){
sol();
}
return 0;
}
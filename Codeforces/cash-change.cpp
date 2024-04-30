#include<iostream>
#include<map>
#define ll long long int
#define nn "\n"
using namespace std;
int main() {
ios::sync_with_stdio(false);
cin.tie(0);
int n;
cin>>n;
int five=n/500;
n=n %500;
int hun=n/100;
n=n%100;
int fifty=n/50;
n=n%50;
int ten=n/10;
n=n%10;
int fiv=n/5;
n=n%5;
int one=n;
for(int i=0;i<one; i++) cout<<1<<" "; 
for(int i=0;i<fiv; i++)cout<<5<<" ";
for(int i=0;i<ten; i++) cout<<10<<" ";
for(int i=0;i<fifty; i++)cout<<50<<" ";
for (int i=0;i<hun; i++) cout<<100<<" ";
for(int i=0;i<five; i++) cout<<500<<" ";
return 0;

}
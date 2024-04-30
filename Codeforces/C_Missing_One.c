#include<iostream>
using namespace std;

int main() {
    long long int n;
    cin >> n;
    int sum = (n*(n+1)/2);
    int a[n-1];
    for (int i=0; i<n-1; i++) {
        cin >> a[i];
        sum = sum-a[i];
    }
    cout << sum;
    return 0;
}

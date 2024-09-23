#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set <char> s;
    for (int i = 0; i < n; i ++) {
        char k;
        cin >> k;
        if (isupper(k)) {
            k = tolower(k);
        }
        s.insert(k);
    }
  
    if (s.size() == 26) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
  
    return 0;
}
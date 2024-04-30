#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        int n = s.size();

        // check if the string has odd length or if both characters are the same
        if (n % 2 == 1 || s[0] == s[n-1]) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }

    return 0;
}

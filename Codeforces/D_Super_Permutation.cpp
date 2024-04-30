#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n == 1) {
            cout << "1" << endl;
            continue;
        }
        
        if(n&1){
            cout<<"-1"<<endl;
            continue;
        }

        vector<int> A;

        for (int i = 0; i < n / 2; i++) {
            A.push_back(i);
            A.push_back(n - i - 1);
        }

        int cs = 0;
        cout << n << " ";

        for (int i = 0; i < n - 1; i++) {
            cs += i;
            cout << (A[i + 1] - A[i] + n) % n << " ";
        }

        cout << endl;
    }

    return 0;
}
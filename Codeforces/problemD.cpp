#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        vector<int> difficulties(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> difficulties[i];
        }
        int min_difficulty = *min_element(difficulties.begin(), difficulties.end());
        cout << min_difficulty << endl;
    }
    return 0;
}
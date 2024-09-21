#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int arr[x];
   long long sum2 = 0, sum1 = 0;
    for (int i = 0; i < x && cin >> arr[i]; i++)
        sum1 += arr[i];
    sort(arr, arr + x);
    reverse(arr, arr + x);
    int i = 0;
    while (sum2 <= sum1)
    {
        sum1 -= arr[i];
        sum2 += arr[i];
        i++;
    }
    cout << i;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cout << "Size of the array: ";
    cin >> size;
    int *arr = new int[size];       // Dynamic memory allocation
    for (int i = 0; i < size; i++)
    {
        arr[i] = i;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;
}
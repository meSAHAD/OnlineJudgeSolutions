#include <iostream>
#include <cstring>
#include <algorithm>
#include <queue>
#include <cmath>
#define MAXN 100010
using namespace std;
int main()
{
    int n;
    int t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        int s = 0;
        for (int i = 1; i <= n / 2; i++)
            s += pow(2, i);
        printf("%d\n", s);
    }
    return 0;
}
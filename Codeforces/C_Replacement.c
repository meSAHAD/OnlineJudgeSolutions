#include <stdio.h>
int main()
{
    int n, a[100001];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] < 0)
            a[i] = 2;
        else if (a[i] > 0)
            a[i] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
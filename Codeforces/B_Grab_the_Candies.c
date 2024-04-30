#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, odd = 0, even = 0, d[100];
        scanf("%d", &n);
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &d[j]);
            if (d[j] % 2 == 0) even = even + d[j];
            else odd = odd + d[j];
        }
        if (even <= odd) printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}
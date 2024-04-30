#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int j = 1; j <= n; j++)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        int i = a % b;
        if (i != 0)
            printf("%d\n", b - i);
        else
            printf("%d\n", i);
    }
    return 0;
}
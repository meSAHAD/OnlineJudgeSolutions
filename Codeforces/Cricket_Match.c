#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        if (b * 36 >= a)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    if ((a == 0 && b == 0) || abs(a - b) >= 2)
    {
        printf("NO\n");
    }
    else
        printf("YES\n");

    return 0;
}

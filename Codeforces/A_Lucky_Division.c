#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n % 7 == 0 || n % 4 == 0 || n % 47 == 0 || n % 74 == 0 || n % 774 == 0 || n % 477 == 0 || n % 474 == 0 || n % 747 == 0)
    {
        printf("YES \n ");
    }
    else
        printf("NO\n ");
    return 0;
}
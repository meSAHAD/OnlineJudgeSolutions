#include <stdio.h>

int main()
{
    int a, j = 0, b[101];
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            b[j] = i;
            j++;
        }
    }
    for (int i = 0; i < j; i++)
    {
        printf("%d\n", b[i]);
    }
    return 0;
}
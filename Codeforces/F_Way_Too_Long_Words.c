#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char a[10001];
        scanf("%s", a);
        int n = strlen(a);
        if (n < 11)
        {
            for (int i = 0; i < n; i++)
            {
                printf("%c", a[i]);
            }
            printf("\n");
        }
        else
            printf("%c%d%c\n", a[0], n - 2, a[n - 1]);
    }
    return 0;
}

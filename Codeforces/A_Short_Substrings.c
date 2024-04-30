#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char b[101];
        scanf("%s", b);
        int n = strlen(b);
        for (int i = 0; i < n; i += 2)
        {
            printf("%c", b[i]);
        }
        printf("%c\n", b[n - 1]);
    }
    return 0;
}
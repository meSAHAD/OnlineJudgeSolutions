#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[105];
        scanf("%s", s);
        int n = strlen(s);
        int count = 0;
        if (n == 1)
        {
            if (s[0] == '^')
                count++;
        }
        if (s[0] == '_')
            count++;
        if (s[n - 1] == '_')
            count++;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == '_' && s[i + 1] == '_')
                count++;
        }
        printf("%d\n", count);
    }
    return 0;
}

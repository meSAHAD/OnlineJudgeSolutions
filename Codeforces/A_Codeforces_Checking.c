#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    char s[t];
    for (int i = 0; i < t; i++)
    {
        scanf("%s", &s[i]);
    }
    for (int i = 0; i < t; i++)
    {
        if (s[i] == 'c' || s[i] == 'o' || s[i] == 'd' || s[i] == 'e' || s[i] == 'f' || s[i] == 'o' || s[i] == 'r' || s[i] == 's')
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
#include <stdio.h>

int main()
{
    char s[1001];
    scanf("%s", s);
    int C_count = 0;
    int S_count = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            C_count++;
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            S_count++;
        }
    }
    printf("%d %d", C_count, S_count);

    return 0;
}

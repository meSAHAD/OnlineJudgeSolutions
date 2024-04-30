//solved by SAHAD

#include <stdio.h>
#include <string.h>

#define MAXN 50

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        char s[MAXN + 1];
        scanf("%s", s);
        int n = strlen(s);
        int freq[26] = {0};
        for (int i = 0; i < n / 2; i++)
        {
            freq[s[i] - 'a']++;
        }
        int palin = 0;
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] > 0)
            {
                palin++;
            }
        }
        if (palin >= 2)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}

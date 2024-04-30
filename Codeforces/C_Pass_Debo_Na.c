#include<stdio.h>
#include<string.h>

int main()
{
    char s[100000];
    while (scanf("%s", s) != EOF)
    {
        int c = 0, a = 0, b = 0, k = 0;
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
                a++;
            else if (s[i] >= 'A' && s[i] <= 'Z')
                b++;
            else
                c++;
            if (a != 0 && b != 0 && c != 0)
            {
                k++;
                a = 0;
                b = 0;
                c = 0;
            }
        }
        printf("%d\n", k);
    }
    return 0;
}

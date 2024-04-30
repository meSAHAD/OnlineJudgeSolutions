#include <stdio.h>
#include <string.h>

int main()
{
    char S[1001];
    scanf("%s", S);
    int count[26] = {0};
    for (int i = 0; i < strlen(S); i++)
    {
        int index = S[i] - 'a';
        count[index]++;
    }
    for (int i = 0; i < 26; i++)
    {
        printf("%c - %d\n", i + 'a', count[i]);
    }

    return 0;
}

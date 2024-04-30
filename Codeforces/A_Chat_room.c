#include <stdio.h>
#include <string.h>
int main()
{
    int b, count;
    b = count = 0;
    char st[100];
    char word[] = "hello";
    scanf("%s", st);
    for (int i = 0; i < strlen(st); i++)
    {
        if (st[i] == word[b])
        {
            b++;
            count++;
        }
    }
    if (count == 5)
        printf("YES \n");
    else
        printf("NO\n");
    return 0;
}
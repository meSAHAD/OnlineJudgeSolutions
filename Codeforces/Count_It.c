#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[1001];
    fgets(str, 1001, stdin);

    int i, small_count = 0, capital_count = 0, space_count = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (islower(str[i]))
        {
            small_count++;
        }
        else if (isupper(str[i]))
        {
            capital_count++;
        }
        else if (isspace(str[i]))
        {
            space_count++;
        }
    }

    printf("Capital - %d\n", capital_count);
    printf("Small - %d\n", small_count);
    printf("Spaces - %d\n", space_count - 1);

    return 0;
}

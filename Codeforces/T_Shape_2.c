#include <stdio.h>
// solved by SAHAD
int main()
{
    int N, i, j, space;

    scanf("%d", &N);

    space = N - 1;

    for (i = 1; i <= N; i++)
    {
        for (j = 1; j <= space; j++)
        {
            printf(" ");
        }
        space--;

        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

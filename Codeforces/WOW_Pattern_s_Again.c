#include <stdio.h>

int main()
{
    int N, i, j, k;

    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < (N - i - 1); j++)
        {
            printf(" ");
        }
        for (k = 0; k < (2 * i + 1); k++)
        {
            if (i % 2 == 0)
                printf("^");
            else
                printf("*");
        }
        printf("\n");
    }

    return 0;
}

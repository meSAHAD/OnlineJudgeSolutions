#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);
    int matrix[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int is_unit_matrix = 1;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                if (matrix[i][j] != 1)
                {
                    is_unit_matrix = 0;
                    break;
                }
            }
            else
            {
                if (matrix[i][j] != 0)
                {
                    is_unit_matrix = 0;
                    break;
                }
            }
        }
        if (is_unit_matrix == 0)
        {
            break;
        }
    }

    if (is_unit_matrix == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}

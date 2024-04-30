#include <stdio.h>

int main()
{
    int n, m, i, j;
    scanf("%d %d", &n, &m);
    int matrix[n][m];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (j = 0; j < m; j++)
    {
        printf("%d ", matrix[n - 1][j]);
    }
    printf("\n");
    for (i = 0; i < n - 1; i++)
    {
        printf("%d ", matrix[i][m - 1]);
    }
    printf("%d\n", matrix[n - 1][m - 1]);

    return 0;
}

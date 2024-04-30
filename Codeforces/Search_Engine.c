#include <stdio.h>

int find_position(int list[], int n, int s)
{
    for (int i = 0; i < n; i++)
    {
        if (list[i] == s)
        {
            return i + 1;
        }
    }
    return -1;
}

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        int n, s;
        scanf("%d", &n);

        int list[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &list[j]);
        }

        scanf("%d", &s);

        int position = find_position(list, n, s);

        if (position != -1)
        {
            printf("Case %d: %d\n", i, position);
        }
        else
        {
            printf("Case %d: Not Found\n", i);
        }
    }

    return 0;
}

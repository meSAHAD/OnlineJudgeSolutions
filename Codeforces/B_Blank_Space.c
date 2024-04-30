#include <stdio.h>

int main()
{
    int t, n, i, max_len, curr_len;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        int a[n];
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        max_len = 0;
        curr_len = 0;
        for (i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                curr_len++;
            }
            else
            {
                if (curr_len > max_len)
                {
                    max_len = curr_len;
                }
                curr_len = 0;
            }
        }
        if (curr_len > max_len)
        {
            max_len = curr_len;
        }
        printf("%d\n", max_len);
    }
    return 0;
}

#include <stdio.h>

int main()
{
    int n, a[1000], min_num, min_pos;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    min_num = a[0];
    min_pos = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min_num)
        {
            min_num = a[i];
            min_pos = i + 1;
        }
    }
    printf("%d %d\n", min_num, min_pos);
    return 0;
}

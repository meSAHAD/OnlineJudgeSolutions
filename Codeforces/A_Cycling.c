#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int t, s, v;
        scanf("%d %d %d", &t, &s, &v);
        int required_time = s / v;
        if (required_time < t)
        {
            printf("SIM\n");
        }
        else
        {
            printf("NAO\n");
        }
    }

    return 0;
}

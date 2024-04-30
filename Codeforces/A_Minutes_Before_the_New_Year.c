#include <stdio.h>
// solved by SAHAD
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int h, m;
        scanf("%d%d", &h, &m);
        int min_left = (24 - h - 1) * 60 + (60 - m);
        printf("%d\n", min_left);
    }
    return 0;
}
#include <stdio.h>
#include <math.h>
int main()
{
    int i, n, h, width = 0;
    float heights[1034];
    scanf("%d %d", &n, &h);
    for (i = 0; i < n; i++)
    {
        scanf("%f", &heights[i]);
    }
    for (i = 0; i < n; i++)
    {
        width += ceil(heights[i] / h);
    }
    printf("%d\n", width);
    return 0;
}

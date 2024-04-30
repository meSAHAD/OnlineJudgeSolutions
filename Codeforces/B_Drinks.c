#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        float vol;
        scanf("%f", &vol);
        sum = sum + vol;
    }
    printf("%.12f\n", sum / n);
    return 0;
}
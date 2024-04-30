#include <stdio.h>

int main()
{
    int n, i, number, sum_even = 0, sum_odd = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &number);
        if (number % 2 == 0)
        {
            sum_even += number;
        }
        else
        {
            sum_odd += number;
        }
    }
    printf("%d %d\n", sum_even, sum_odd);
    return 0;
}

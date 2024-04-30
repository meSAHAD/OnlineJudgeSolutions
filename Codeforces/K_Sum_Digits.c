#include <stdio.h>

int main()
{
    int n, i, digit, digit_sum = 0;
    char digits[1000001];
    scanf("%d", &n);
    scanf("%s", digits);
    for (i = 0; i < n; i++)
    {
        digit = digits[i] - '0';
        digit_sum += digit;
    }
    printf("%d\n", digit_sum);

    return 0;
}

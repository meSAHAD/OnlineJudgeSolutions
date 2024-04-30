#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int sum = a;
    while (a >= b)
    {
        sum = sum + a / b;
        a = a / b + a % b;
    }
    printf("%d", sum);
    return 0;
}

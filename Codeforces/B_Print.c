#include <stdio.h>

void printNumbers(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d", i);
        if (i < n)
        {
            printf(" ");
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    printNumbers(n);
    printf("\n");
    return 0;
}

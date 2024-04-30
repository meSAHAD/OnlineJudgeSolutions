#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    if (n % 2 != 0)
    {
        for (i = n - 1; i >= 0; i -= 2)
        {
            printf("%d ", arr[i]);
        }
    }
    else
    {
        for (i = n - 2; i >= 0; i -= 2)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}

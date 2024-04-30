#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int n, i;
    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    qsort(arr, n, sizeof(int), compare);

    if (n % 2 == 1)
    {
        printf("%d\n", arr[n / 2]);
    }
    else
    {
        printf("%d %d\n", arr[n / 2 - 1], arr[n / 2]);
    }

    return 0;
}

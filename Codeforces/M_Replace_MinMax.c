#include <stdio.h>
#include <limits.h>

int main()
{
    int n, min_number = INT_MAX, max_num = INT_MIN, min_index, max_index, temp;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] < min_number)
        {
            min_number = a[i];
            min_index = i;
        }
        if (a[i] > max_num)
        {
            max_num = a[i];
            max_index = i;
        }
    }
    temp = a[min_index];
    a[min_index] = a[max_index];
    a[max_index] = temp;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}

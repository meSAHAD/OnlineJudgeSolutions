#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, j, temp;

    scanf("%d", &N);

    int A[N];

    for (i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    // Bubble sort algorithm
    for (i = 0; i < N - 1; i++)
    {
        for (j = 0; j < N - i - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                // swap A[j] and A[j+1]
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }

    // Printing the sorted array
    for (i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}

#include <stdio.h>
int main()
{
    int n, occur, police = 0, Untreated_crimes = 0;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d", &occur);
        if (occur > 0)
            police += occur;
        if (occur < 0)
            if (police > 0)
                police--;
            else
                Untreated_crimes++;
    }
    printf("%d\n", Untreated_crimes);
    return 0;
}

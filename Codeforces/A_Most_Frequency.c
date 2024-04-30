#include <stdio.h>
#include <string.h>
int main()
{
    char num[10005];
    int count[10] = {0};
    int i, max_count = 0, max_digit = 0;
    scanf("%s", num);
    for (i = 0; i < strlen(num); i++)
    {
        int digit = num[i] - '0';
        count[digit]++;
        if (count[digit] > max_count || (count[digit] == max_count && digit < max_digit))
        {
            max_count = count[digit];
            max_digit = digit;
        }
    }
    printf("%d\n", max_digit);
    return 0;
}
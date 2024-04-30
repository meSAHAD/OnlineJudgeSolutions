#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
    int original_number;
    scanf("%d",&original_number);
    int reversed = 0;
    int num = original_number;
    while (num != 0)
    {
        int r = num % 10;
        reversed = reversed * 10 + r;
        num /= 10;
    }
    if (original_number == reversed)
    {
        printf("wins\n");
    }
    else
    {
        printf("loses\n");
    }
    }
    return 0;
}
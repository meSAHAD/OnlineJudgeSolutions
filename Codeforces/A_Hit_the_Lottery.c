#include <stdio.h>
int main()
{
    int i, num = 0;
    scanf("%d", &i);
    for (; i > 0;)
    {
        if (i >= 100)
        {
            i -= 100;
            num++;
        }
        if (i >= 20 && i < 100)
        {
            i -= 20;
            num++;
        }
        if (i >= 10 && i < 20)
        {
            i -= 10;
            num++;
        }
        if (i >=5 && i< 10)
        {
            i -= 5;
            num++;
        }
        if (i >= 1 && i < 5)
        {
            i -= 1;
            num ++;
        }
    }
    printf("%d\n", num);
    return 0;
}
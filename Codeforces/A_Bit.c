#include<stdio.h>
int main()
{
    int n,x=0;
    scanf("%d",&n);

    for (int i = 0; i <n; i++)
    {
        char c[4];
        scanf("%s",c);
        if (c[1]=='+')x++;
        else x--;   
    }
    printf("%d",x);
    return 0;
}
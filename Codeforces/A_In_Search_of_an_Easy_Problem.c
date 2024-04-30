#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int i= 0; i<n; i++)
    {
        int opinion;
        scanf("%d",&opinion);
        if (opinion==1)
        {
            printf("HARD\n");
            return 0;
        }
    }
    printf("EASY\n");

    return 0;
}
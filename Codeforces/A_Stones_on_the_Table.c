#include<stdio.h>

int main()
{
    int count =0;
    char s[101];
    int n;
    scanf("%d %s",&n,&s);

    for( int i=0; i<n; i++)
    {
        if (s[i]==s[i+1])
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
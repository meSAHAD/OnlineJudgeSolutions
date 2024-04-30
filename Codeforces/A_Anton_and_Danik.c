#include<stdio.h>
int main()
{
    int n, a=0, d=0;
    scanf("%d",&n);
    char ar[n];
    for(int i=0; i<n; i++)
    {
        scanf("%s",&ar[i]);
        if(ar[i]=='D') d++;
        else a++;
    }
    if (d>a) printf("Danik\n");
    else if (a>d) printf("Anton\n");
    else printf("Friendship\n");
    return 0;
}
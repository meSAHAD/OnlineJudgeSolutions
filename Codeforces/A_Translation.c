#include<stdio.h>
#include<string.h>
int main()
{
    char a[101], b[101];
    int flag =0;
    scanf("%s%s", a,b);
    strrev(b);
    if (strcmp(a,b)==0) printf("YES\n");
    else printf("NO\n");
    return 0;
}
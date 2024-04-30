#include<stdio.h>
#include<string.h>
int main()
{
    char a[101],b[101];
    scanf("%s%s",&a,&b);
    strupr(a);
    strupr(b);
    int com =strcmp(a,b);

    if (com<0)printf("-1\n");
    else if (com==0)printf("0\n");
    else printf("1\n");
    return 0;
}
#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    c=a%10;
    d=a/10;
    if(c%d==0||d%c==0) printf("YES\n");
    else printf("NO\n");
    return 0;
}
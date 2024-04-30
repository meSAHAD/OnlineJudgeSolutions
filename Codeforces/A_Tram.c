#include<stdio.h>
int main()
{
    int n,a,b,sum=0,l=0;
    scanf("%d",&n);
    for (int i=0; i<n; i++)
    {
        scanf("%d%d",&a,&b);
        sum = (a+l)-b;
        if(sum<0) l=0;
        else l= sum;
    }
    printf("%d",sum);
    return 0;

}
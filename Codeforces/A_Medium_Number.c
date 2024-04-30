#include<stdio.h>

int main()
{
    int a,b,c,n;
    scanf("%d",&n);

    for ( int i=0; i<n; i++)
    {
        scanf("%d%d%d",&a,&b,&c);

        if ((a>b && b>c) || (c>b && b>a))
        {
            printf("%d\n",b);
        }
        else if((a>c && c>b) || (b>c && c>a))
        {
          printf("%d\n",c);  
        }
        else
        {
            printf("%d\n",a);
        }
    }
    return 0;
}
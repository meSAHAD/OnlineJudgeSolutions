#include<stdio.h>
#include<math.h>

int main()
{
    int y;
    scanf("%d",&y);
    while(y--)
    {
        int x,y,s,a;
        scanf("%d%d%d",&x,&y,&s);
        a=(x*y)/(s-a);
        printf("%d %d\n",a,s-a);
    }
    return 0;
}
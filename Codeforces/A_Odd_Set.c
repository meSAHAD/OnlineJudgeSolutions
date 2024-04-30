#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for (int i=0; i<n; i++)
    {
        int t;
        scanf("%d",&t);
        int a[2*t];
        int oddcount=0;
        int evencount=0;
        for (int j=1; j<=2*t; j++)
        {
            scanf("%d",&a[j-1]);
            if (a[j-1]%2==0) evencount++;
            else oddcount++;
        }
        /*for (int k=1; k<=2*t; k++)
        {
            if (a[k-1]%2==0) evencount++;
            else oddcount++;
        }*/
        if (evencount == oddcount) printf("Yes\n");
        else printf("No\n");

    }
    return 0;
}
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    if(n==1) printf("I hate it\n");
    else
    {
        for (int i=1; i<n; i++)
        {
            if(i%2==0) printf("I love that ");
            else printf("I hate that ");
        }
         if(n%2==0) printf("I love it");
            else printf("I hate it");
    }   
    return 0;
}
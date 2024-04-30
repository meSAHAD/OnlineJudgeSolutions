#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int k=0; k<t; k++)
    {
        char a[100];
        int i;
        scanf("%s",a);
        for (int i=0; i<strlen(a);i++)
        {
            printf("%c",a[i]);
        }
       for (int i=strlen(a)-1; i>=0;i--)
        {
            printf("%c",a[i]);
        
        } 
        printf("\n");
        
    }
    return 0;

}
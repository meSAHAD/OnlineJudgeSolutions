#include<stdio.h>
#include<string.h>
int main ()
{
    int  count=0;
    char a[100];
    for(int i=0; i<strlen(a); i++)
    {
        if (a[i]=='4' || a[i]=='7') count++;
    }
   
    if (count ==4 || count ==7) printf("YES\n");
    else printf("NO\n");
    return 0;
    
}
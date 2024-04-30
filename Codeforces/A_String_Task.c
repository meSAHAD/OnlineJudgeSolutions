#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char c[101];
    scanf("%s",c);
    for(int i=0; i<strlen(c); i++)
    {
        c[i]= tolower(c[i]);
        if (c[i]!='a'&&c[i]!='o'&&c[i]!='y'&&c[i]!='e'&&c[i]!='u'&&c[i]!='i')
        {
            printf(".%c",c[i]);
        }
    }
    return 0;
}
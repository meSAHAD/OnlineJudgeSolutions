#include<stdio.h>
#include<string.h>
int main()
{
    char temp, s[101];
    scanf("%s", s);

    for (int i=strlen(s)-1; i>=0; i=i-2)
    {
        for (int j=0; j<i; j=j+2)
        {
            if (s[j]>s[j+2])
            {
                temp=s[j];
                s[j]=s[j+2];
                s[j+2]=temp;
            }
        }
    }
    printf("%s\n",s);

    return 0;
}
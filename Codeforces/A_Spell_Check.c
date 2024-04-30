#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);

    for (int i=0; i<n; i++)
    {
        int t, i, j;
        scanf( "%d" ,&t); 

        char a[t];
        scanf( "%s" , a) ;

        if (t==5)
        {
            int q=0, w=0, e=0, r=0, t=0; 

            for( i=0; i<strlen(a) ; i++)
            {
                if(a[i]=='T') q++;
                if(a[i]=='i') w++;
                if(a[i]=='m') e++;
                if(a[i]=='u') r++;
                if(a[i]=='r') t++;
            }
         if(q!=0 && w!=0 && e!=0 && r!=0 && t!=0) printf( "YES\n" );
         else printf( "NO\n" );
        }
         else printf( "NO\n" );
    }
    return 0;
}
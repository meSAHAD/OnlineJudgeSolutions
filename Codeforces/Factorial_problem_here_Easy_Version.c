#include <stdio.h>
 
unsigned long long int factorial(unsigned long long int n)
{
    long long int res = 1, i;
    for (i = 2; i <= n; i++)
        res *= i;
    return res;
}
 
// Driver code
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        long long int N;
        scanf("%lld",&N);
        long int a=factorial(N);
        long int b= factorial(N-1);
        long int c= factorial(N-2);
        printf("%d\n",(a-b)/c);
    }
    return 0;
}
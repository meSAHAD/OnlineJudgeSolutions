#include<stdio.h>

unsigned long long int factorial(unsigned long long int n)
{
    long long int res = 1, i;
    for (i = 2; i <= n; i++)
        res *= i;
    return res;
}

int main()
{
    long long int n;
    scanf("%lld",&n);
    
    
    long long int fact[21];
    for (int i = 0; i <= 20; i++)
        fact[i] = factorial(i);
    
    for(long long int i=0; i<n; i++)
    {
        long long int N;
        scanf("%lld",&N);
        long long int a = fact[N];
        long long int b = fact[N-1];
        long long int c = fact[N-2];
        
        printf("%lld\n",(a-b)/c);
    }
    
    return 0;
}


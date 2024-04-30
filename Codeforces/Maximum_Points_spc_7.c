#include <stdio.h>

long long int gcd(long long int a, long long int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

long long int lcm(long long int a, long long int b) {
    return a * b / gcd(a, b);
}

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        long long int a, b;
        scanf("%lld %lld", &a, &b);
        
        long long int ans = lcm(a, b) - b;
        long long int x = 2;
        
        while (x * x <= b) {
            if (b % x == 0) {
                if (lcm(a, x) - x < ans) ans = lcm(a, x) - x;
                if (lcm(a, b/x) - (b/x) < ans) ans = lcm(a, b/x) - (b/x);
            }
            x++;
        }
        
        printf("%lld\n", ans%10);
    }
    
    return 0;
}

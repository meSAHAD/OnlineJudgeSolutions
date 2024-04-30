#include <stdio.h>

long long gcd(long long a, long long b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int main() {
    int T;
    scanf("%d", &T);
    for (int i = 1; i <= T; i++) {
        long long a, b, l;
        scanf("%lld %lld %lld", &a, &b, &l);
        long long c = a * b / gcd(a, b);
        long long A = l / c;
        printf("Case %d: ", i);
        if (l % c != 0) {
            printf("impossible\n");
            continue;
        }
        long long x;
        while ((x = gcd(A, c)) > 1) {
            A *= x;
            c /= x;
        }
        printf("%lld\n", A);
    }
    return 0;
}

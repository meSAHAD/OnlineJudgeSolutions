#include <stdio.h>
#include <math.h>

long long findLargestPrimeFactor(long long n) {
    long long maxPrime = 1;

    // Divide by 2 repeatedly until n is odd
    while (n % 2 == 0) {
        n /= 2;
        maxPrime = 2;
    }

    // Check for odd factors up to the square root of n
    for (long long i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            n /= i;
            maxPrime = i;
        }
    }

    // If n is greater than 2, it must be a prime factor
    if (n > 2) {
        maxPrime = n;
    }

    return maxPrime;
}

int main() {
    long long n;
    scanf("%lld", &n);

    long long maxPrime = findLargestPrimeFactor(n);
    printf("%lld\n", maxPrime);

    return 0;
}

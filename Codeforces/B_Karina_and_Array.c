#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void *a, const void *b) {
    return (*(long long int *)a - *(long long int *)b);
}

void solve() {
    long long int n;
    scanf("%lld", &n);
    long long int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }
    qsort(a, n, sizeof(long long int), (const void *) &cmpfunc);
    long long int result = (a[0]*a[1]) >= (a[n-1]*a[n-2]) ? (a[0]*a[1]) : (a[n-1]*a[n-2]);
    printf("%lld\n", result);
    return;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}

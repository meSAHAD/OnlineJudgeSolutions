#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


#define MAX_N 100000

int abs(int x) {
    return (x < 0) ? -x : x;
}

int max(int a, int b) {
    return (a > b) ? a : b;
}

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++) {
        int n;
        scanf("%d", &n);
        int a[MAX_N];
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);

        int ans = INT_MAX;
        for (int i = 0; i < n; i++) {
            int mx = 0;
            if (i + 1 < n)
                mx = max(mx, abs(a[i + 1] - a[i]));
            if (i - 1 >= 0)
                mx = max(mx, abs(a[i - 1] - a[i]));
            ans = min(ans, mx);
        }
        printf("%d\n", ans);
    }
    return 0;
}

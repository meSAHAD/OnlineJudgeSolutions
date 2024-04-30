#include <stdio.h>

int main() {
    int n, a[25], i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n-1; i++) {
        if (a[i] < a[i+1]) {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}

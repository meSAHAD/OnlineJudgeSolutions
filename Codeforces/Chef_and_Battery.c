#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int ans = 0;
        while (n != 50) {
            if (n > 50) {
                n -= 3;
                ans++;
            } else {
                n += 2;
                ans++;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}

#include <stdio.h>
#include <string.h>

#define MAX_N 100001

int z[MAX_N];

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char s[MAX_N];
        scanf("%s", s);
        int n = strlen(s);
        z[0] = n;
        int l = 0, r = 0;
        for (int i = 1; i < n; i++) {
            if (i > r) {
                l = r = i;
                while (r < n && s[r-l] == s[r]) {
                    r++;
                }
                z[i] = r-l;
                r--;
            } else {
                int k = i-l;
                if (z[k] < r-i+1) {
                    z[i] = z[k];
                } else {
                    l = i;
                    while (r < n && s[r-l] == s[r]) {
                        r++;
                    }
                    z[i] = r-l;
                    r--;
                }
            }
        }
        int sum = n;
        for (int i = 1; i < n; i++) {
            sum += z[i];
        }

        printf("%d\n", sum);
    }

    return 0;
}

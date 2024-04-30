#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char s[200005];
        scanf("%s", s);
        int n = strlen(s);
        if (n % 2 == 1 || s[0] == s[n-1]) {
            printf("NO\n");
        } else {
            printf("YES\n");
        }
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char c[] = "codeforces";
    int t;
    scanf("%d", &t);
    while (t--) {
        char s[11];
        scanf("%s", s);
        int co = 0;
        for (int i = 0; i < strlen(s); i++) {
            if (s[i] == c[i]) {
                continue;
            } else {
                co++;
            }
        }
        printf("%d\n", co);
    }
    return 0;
}

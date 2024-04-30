#include <stdio.h>
#include <string.h>

int main() {
    int t, n, i, j, flag, dis;
    char st[100001];
    scanf("%d", &t);
    while (t--) {
        scanf("%d %s", &n, st);
        flag = 0;
        for (i = 0; i < n; i++) {
            for (j = i + 1; j < n; j++) {
                if (st[i] == st[j]) {
                    dis = j - i;
                    if (dis % 2 != 0) {
                        flag = 1;
                        break;
                    }
                }
            }
            if (flag) {
                break;
            }
        }
        if (flag) {
            printf("NO\n");
        } else {
            printf("YES\n");
        }
    }
    return 0;
}

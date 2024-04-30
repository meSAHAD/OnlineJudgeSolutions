#include<stdio.h>
#include<string.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, count = 0;
        char s[1001];
        scanf("%d %s", &n, s);
        int flag = 1;
        for (int i = 0; i < n; i++) {
            if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u') {
                count++;
                if (count >= 4) {
                    flag= 0;
                    break;
                }
            }
            else {
                count = 0;
            }
        }
        if (flag==1) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}

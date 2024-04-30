#include <stdio.h>
#include <string.h>

#define ll long long

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char s[101];
        scanf("%s", s);

        ll n = strlen(s);
        ll cnt = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                cnt++;
            }
        }

        if (cnt == n) {
            printf("%lld\n", n * n);
        } else {
            ll cmt = 0, p = 0, i = 0;
            cnt = 0;

            while (1) {
                if (s[i % n] == '1') {
                    cnt++;
                } else {
                    cmt = (cmt > cnt) ? cmt : cnt;
                    cnt = 0;
                }

                cmt = (cmt > cnt) ? cmt : cnt;
                i++; p++;

                if (p >= n && s[i % n] == '0') {
                    break;
                }
            }

            cmt = (cmt > cnt) ? cmt : cnt;
            printf("%lld\n", ((cmt + 1) * (cmt + 1)) / 4);
        }
    }

    return 0;
}

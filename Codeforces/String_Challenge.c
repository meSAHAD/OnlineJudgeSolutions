#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        char S[100001], C;
        scanf("%s %c", S, &C);
        char new_S[100001];
        int len = strlen(S);
        int j = 0;
        for (int k = 0; k < len; k++) {
            if (S[k] != C) {
                new_S[j++] = S[k];
            }
        }
        new_S[j] = '\0';
        printf("%s\n", new_S);
    }

    return 0;
}

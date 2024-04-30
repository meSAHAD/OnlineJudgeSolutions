#include <stdio.h>

int main() {
    int n, k, min, num, flag = 1, counter = 0;
    scanf("%d %d", &n, &k);

    for (int i = 1; i <= n; i++) {
        scanf("%d", &num);
        if (flag) {
            min = num;
            flag = 0;
        } else {
            if (min > num) {
                min = num;
            }
        }
        counter++;
        if (counter == k || i == n) {
            counter = 0;
            flag = 1;
            printf("%d ", min);
        }
    }

    return 0;
}

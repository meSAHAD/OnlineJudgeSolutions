#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int min_num, max_num;
    min_num = a < b ? (a < c ? a : c) : (b < c ? b : c);
    max_num = a > b ? (a > c ? a : c) : (b > c ? b : c);

    printf("%d %d\n", min_num, max_num);

    return 0;
}

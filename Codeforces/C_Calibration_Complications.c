#include <stdio.h>
#include <stdlib.h>

int make_arrays_equal(int a[], int b[], int n) {
    int sum_a = 0, sum_b = 0;
    for (int i = 0; i < n; i++) {
        sum_a += a[i];
        sum_b += b[i];
    }
    if ((sum_a + sum_b) % 2 == 0) {
        return -1;  // not possible
    }
    else {
        int d = abs(sum_a - sum_b);
        int operations = d ;
        return operations;
    }
}

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    int b[n];
    for (int i=0;i<n;i++) scanf("%d",&a[i]);
     for (int i=0;i<n;i++) scanf("%d",&b[i]);
    int min_ops = make_arrays_equal(a, b, n);
    printf("%d\n", min_ops);
    return 0;
}

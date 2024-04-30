#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int i;
    for (i = 2; i <= n; i += 2) {
        printf("%d\n", i);
    }
    
    if (i == 2) { 
        printf("-1\n");
    }
    
    return 0;
}

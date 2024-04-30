#include <stdio.h>

int is_equilateral_triangle(int a, int b, int c) {
    if (a == b && b == c && a != 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    int result = is_equilateral_triangle(a, b, c);
    
    if (result == 1) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    
    return 0;
}

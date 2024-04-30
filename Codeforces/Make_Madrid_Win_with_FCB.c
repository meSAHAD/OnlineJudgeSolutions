#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  
    while(T--) {
        int X, Y;
        scanf("%d %d", &X, &Y);       
        if(X == Y) {
            printf("no\n");
            continue;
        }      
        int N = X + Y;
        int W = (N + 1) / 2;
        if(X >= W) {
            printf("yes\n");
            continue;
        }    
        printf("%s\n", (X >= (N - W + 1)) ? "yes" : "no");
    } 
    return 0;
}

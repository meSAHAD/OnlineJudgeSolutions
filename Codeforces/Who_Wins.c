#include <stdio.h>

int main() {
    int n, tiger_score = 0, pathan_score = 0;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        int x1, x2;
        scanf("%d %d", &x1, &x2);
        
        if (x1 > x2) {
            tiger_score++;
        } else if (x2 > x1) {
            pathan_score++;
        }
    }
    
    if (tiger_score > pathan_score) {
        printf("Tiger\n");
    } else if (pathan_score > tiger_score) {
        printf("Pathan\n");
    } else {
        printf("Draw\n");
    }
    
    return 0;
}

#include <stdio.h>

void calculate_marks_difference(int marks[], int n) {
    int highest_mark = marks[0];
    for (int i = 1; i < n; i++) {
        if (marks[i] > highest_mark) {
            highest_mark = marks[i];
        }
    }
    for (int i = 0; i < n; i++) {
        int difference = highest_mark - marks[i];
        printf("%d ", difference);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    
    int marks[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }
    
    calculate_marks_difference(marks, n);
    
    return 0;
}

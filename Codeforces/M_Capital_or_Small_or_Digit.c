#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);

    if (ch >= '0' && ch <= '9') {
        printf("IS DIGIT\n");
    } else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("ALPHA\n");
        if (ch >= 'A' && ch <= 'Z') {
            printf("IS CAPITAL\n");
        } else {
            printf("IS SMALL\n");
        }
    }

    return 0;
}

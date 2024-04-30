#include <stdio.h>
#include <string.h>

#define MAX_LEN 1000

void count_chars(char *s) {
    int i, len;
    int countOfChars[256] = {0}; // Initialize countOfChars with all zeros

    len = strlen(s);

    // Loop through each character in the string and increment count
    for (i = 0; i < len; i++) {
        countOfChars[(int)s[i]]++;
    }

    // Print character count
    for (i = 0; i < 256; i++) {
        if (countOfChars[i] != 0) {
            printf("%c : %d\n", i, countOfChars[i]);
        }
    }
}

int main() {
    char s[MAX_LEN];
    scanf("%s",s);
    count_chars(s);

    return 0;
}

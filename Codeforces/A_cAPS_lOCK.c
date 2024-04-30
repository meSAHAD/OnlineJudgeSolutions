#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char word[101];
    scanf("%s", word);
    int len = strlen(word);
    int all_upper = 1, first_lower = 1;
    
    // Check if all letters are uppercase
    for (int i = 0; i < len; i++) {
        if (!isupper(word[i])) {
            all_upper = 0;
            break;
        }
    }
    
    // Check if only first letter is lowercase and rest are uppercase
    if (islower(word[0])) {
        for (int i = 1; i < len; i++) {
            if (islower(word[i])) {
                first_lower = 0;
                break;
            }
        }
    } else {
        first_lower = 0;
    }
    
    // Apply transformation and print result
    if (all_upper || first_lower) {
        for (int i = 0; i < len; i++) {
            if (isupper(word[i])) {
                printf("%c", tolower(word[i]));
            } else {
                printf("%c", toupper(word[i]));
            }
        }
        printf("\n");
    } else {
        printf("%s\n", word);
    }
    
    return 0;
}

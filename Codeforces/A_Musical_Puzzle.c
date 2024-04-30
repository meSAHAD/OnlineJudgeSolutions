#include <stdio.h>
#include <string.h>

int calculateMinMelodies(const char* melody) {
    int melodyLength = strlen(melody);
    int uniqueSequences = 0;
    char sequences[3];

    for (int i = 0; i < melodyLength - 1; i++) {
        strncpy(sequences, &melody[i], 2);
        sequences[2] = '\0';

        int isUnique = 1;
        for (int j = 0; j < i; j++) {
            if (strncmp(sequences, &melody[j], 2) == 0) {
                isUnique = 0;
                break;
            }
        }

        if (isUnique) {
            uniqueSequences++;
        }
    }

    return uniqueSequences;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        char melody[10001];
        scanf("%s", melody);

        int minMelodies = calculateMinMelodies(melody);
        printf("%d\n", minMelodies);
    }

    return 0;
}

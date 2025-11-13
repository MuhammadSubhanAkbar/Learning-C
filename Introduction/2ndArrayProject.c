#include <stdio.h>

#define MAX_CHARS 128  // ASCII character range

int main() {
    int char_freq[MAX_CHARS] = {0};
    int c, max_freq = 0;
    
    // Count character frequencies
    while ((c = getchar()) != EOF) {
        if (c < MAX_CHARS) {
            char_freq[c]++;
            if (char_freq[c] > max_freq) {
                max_freq = char_freq[c];
            }
        }
    }
    
    // Print histogram
    printf("\nCharacter Frequency Histogram:\n");
    printf("===============================\n");
    
    for (int i = 0; i < MAX_CHARS; i++) {
        if (char_freq[i] > 0) {
            // Handle special characters
            if (i == ' ') {
                printf("' '  : ");
            } else if (i == '\t') {
                printf("\\t   : ");
            } else if (i == '\n') {
                printf("\\n   : ");
            } else {
                printf("%c    : ", i);
            }
            
            // Print bars
            for (int j = 0; j < char_freq[i]; j++) {
                printf("*");
            }
            printf(" (%d)\n", char_freq[i]);
        }
    }
    
    return 0;
}
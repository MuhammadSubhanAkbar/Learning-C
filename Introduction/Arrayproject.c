#include <stdio.h>

#define MAX_WORD_LENGTH 20  // Maximum word length we'll track
#define IN 1               // Inside a word
#define OUT 0              // Outside a word

int main() {
    int c, state, current_length;
    int word_lengths[MAX_WORD_LENGTH + 1]; // Index 0 unused, 1-20 for word lengths
    
    // Initialize array
    for (int i = 0; i <= MAX_WORD_LENGTH; i++) {
        word_lengths[i] = 0;
    }
    
    state = OUT;
    current_length = 0;
    
    // Read input and count word lengths
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (state == IN) {
                // Word ended
                if (current_length > MAX_WORD_LENGTH) {
                    word_lengths[MAX_WORD_LENGTH]++;
                } else if (current_length > 0) {
                    word_lengths[current_length]++;
                }
                current_length = 0;
                state = OUT;
            }
        } else {
            state = IN;
            current_length++;
        }
    }
    
    // Handle the last word if input doesn't end with whitespace
    if (state == IN && current_length > 0) {
        if (current_length > MAX_WORD_LENGTH) {
            word_lengths[MAX_WORD_LENGTH]++;
        } else {
            word_lengths[current_length]++;
        }
    }
    
    // Print horizontal histogram
    printf("\nHorizontal Histogram of Word Lengths:\n");
    printf("====================================\n");
    
    for (int i = 1; i <= MAX_WORD_LENGTH; i++) {
        printf("%2d: ", i);
        for (int j = 0; j < word_lengths[i]; j++) {
            printf("*");
        }
        printf(" (%d)\n", word_lengths[i]);
    }
    
    // Show count for words longer than MAX_WORD_LENGTH
    if (word_lengths[MAX_WORD_LENGTH] > 0) {
        printf(">%d: ", MAX_WORD_LENGTH);
        for (int j = 0; j < word_lengths[MAX_WORD_LENGTH]; j++) {
            printf("*");
        }
        printf(" (%d)\n", word_lengths[MAX_WORD_LENGTH]);
    }
    
    return 0;
}
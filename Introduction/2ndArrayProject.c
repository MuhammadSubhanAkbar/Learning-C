#include <stdio.h>

#define MAX_CHAR 128

// Function declarations
void count_char_frequencies(int frequencies[], int *max_freq);
void print_histogram(const int frequencies[]);
char* get_char_display(int ch);

int main()
{
    int char_frequency[MAX_CHAR] = {0};
    int max_freq = 0;

    // Count frequencies
    count_char_frequencies(char_frequency, &max_freq);
    
    // Print histogram
    print_histogram(char_frequency);

    return 0;
}

// Function to count character frequencies from input
void count_char_frequencies(int frequencies[], int *max_freq)
{
    int c;
    while ((c = getchar()) != EOF)
    {
        if (c < MAX_CHAR)
        {
            frequencies[c]++;
            if (frequencies[c] > *max_freq)
            {
                *max_freq = frequencies[c];
            }
        }
    }
}

// Function to get display string for special characters
char* get_char_display(int ch)
{
    static char display[5];
    
    if (ch == ' ')
        return "' '";
    else if (ch == '\t')
        return "\\t";
    else if (ch == '\n')
        return "\\n";
    else
    {
        display[0] = ch;
        display[1] = '\0';
        return display;
    }
}

// Function to print the histogram
void print_histogram(const int frequencies[])
{
    printf("\nCharacter Frequency Histogram\n");
    printf("===============================\n");

    for(int i = 0; i < MAX_CHAR; i++)
    {
        if (frequencies[i] > 0)
        {
            printf("%-4s : ", get_char_display(i));

            // Print bar
            for (int j = 0; j < frequencies[i]; j++)
            {
                printf("*");
            }
            printf(" (%d)\n", frequencies[i]);
        }
    }
}
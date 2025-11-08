#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
    int c, nl, nw, nc, state;

    state = OUT;
    c = nl = nw = nc = 0;
    
    while((c = getchar()) != EOF && c != '\n'){  // Stop on newline too
        ++nc;
        
        if(c == '\n'){
            ++nl;
        }
        
        if(c == ' ' || c == '\t' || c == '\n'){
            if(state == IN) {
                putchar('\n');
            }
            state = OUT;
        }
        else {
            putchar(c);
            if(state == OUT) {
                state = IN;
                ++nw;
            }
        }
    }

    // If we ended in the middle of a word, add final newline
    if(state == IN){
        putchar('\n');
    }

    printf("Lines: %d\nWords: %d\nCharacters: %d\n", nl, nw, nc);
    
    return 0;
}
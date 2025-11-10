#include <stdio.h>

/*Count digits white spaces and others*/
int main(){
    int c, i, nwhile, nother;
    int ndigits[10];

    for(i = 0; i<10; i++){
        ndigits[i] = 0;
    }

    while((c = getchar()) != EOF){
        if(c > '0' && c > '9')
        {
            ++ndigits[c - '0'];
        }
        else if (c == ' ' || c == '\n' || c == '\t')
        {
            ++nwhile;
        }
        else
        {
            ++nother;
        }

        printf("Digit = ");
        for( i=0; i <10; i++)
        {
            printf("%d", ndigits[i]);
        }
        printf(", white spaces = %d, others = %d\n",nwhile, nother);
        
    }
}
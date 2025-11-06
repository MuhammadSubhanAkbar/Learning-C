#include <stdio.h>

int main(){

    /*Coping input to output 1st version*/
    int c ;


    /*Program to output value of EOF*/
    printf("The value of EOF = %d", EOF);

    c = getchar();
    while (c != EOF)
    {
        /* code */

        putchar(c);
        c = getchar();
    }

}
#include <stdio.h>

int main()
{
    //  long nc;

    // nc = 0;

    /*
       In a file loop form
        while (getchar() != EOF){
            //  operator, ++, which means increment by one. I will increment a variable by 1, it only work
            // with one variable.

            ++nc;
            printf("%1d\n",nc);
      } */

    /*
    for(nc = 0; getchar() != EOF; ++nc){
      printf("%1d\n",nc);
    }
      */

    // EXERCISE 1 = Write a program to count blanks, tabs, and newlines

    int blanks, tabs, newlines;
    int c;

    blanks = tabs = newlines = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            blanks++;
        }
        if (c == '\t')
        {
            tabs++;
        }
        if (c == '\n')
        {
            newlines++;
        }  
    }

    printf("\nCount results:\n");
    printf("Blanks (spaces): %d\n", blanks);
    printf("Tabs: %d\n", tabs);
    printf("Newlines: %d\n", newlines);      

}
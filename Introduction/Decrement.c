#include <stdio.h>
#include <conio.h>

int main()
{

   //The decrement operator is used to increase a variable. It is denoted by the symbol ++. It is a unary operator
   // and works with single variable. it decrement variable by 1;

   /*
   There are two types of decrement operator
   Prefix Form: In Prefix form, the operator is written in fornt of the variable.

   --y;

   PostFix Form: In Postfix form, the operator is written after the variable.

   y--;
   */
    int a, b, x, y;

    a = b = x = y = 0;;
    a--;

    b = a;
    printf("a = %d\n\n b = %d\n\n", a,b);

    x--;
    y = x ;

    printf("x = %d\n\n y = %d\n\n", x,y);

   int c,d,z,v;

   c = d = z = v = 0;
   
   d = c--;
   z = --x;

   printf("c = %d\n\n d = %d\n\n",c,d);
   printf("x = %d\n\n  z = %d\n\n",z,v); 

}




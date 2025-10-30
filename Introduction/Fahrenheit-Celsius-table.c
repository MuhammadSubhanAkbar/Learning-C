#include <stdio.h>

/*  Print Fahrenheit and Celsius table
    for fahr = 0,20,30,.....,300;
*/

int main()
{

    /*
    %d print as decimal integer
    %6d print as decimal integer, at least 6 characters wide
    %f print as floating point
    %6f print as floating point, at least 6 characters wide
    %.2f print as floating point, 2 characters after decimal point
    %6.2f print as floating point, at least 6 wide and 2 after decimal point
    */

    float fahr, celsius;
    float lower, upper, step;

    lower = 0;   /* lower limit of temperature scale */
    upper = 300; /* upper limit */
    step = 10;   /* step size */

    fahr = lower;
    while (fahr <= upper)
    {
        celsius = (5 / 9) * (fahr - 32);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
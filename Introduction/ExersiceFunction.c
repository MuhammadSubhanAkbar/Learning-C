#include <stdio.h>
#include <conio.h>

// Option 1: Remove parameters (recommended)
int Conversion(void);

int main()
{
    Conversion();
    getch();  // If you're using conio.h for this
    return 0;
}

int Conversion(void)  // No parameters needed
{
    float fahr, celsius;
    int lower, upper, steps;

    // Asking for steps
    printf("How many steps you want: ");
    scanf("%d", &steps);

    // Asking for upper limit
    printf("What is the upper limit: ");
    scanf("%d", &upper);

    // Asking for lower limit
    printf("What is the lower limit: ");
    scanf("%d", &lower);

    fahr = lower;
    printf("Fahrenheit\tCelsius\n");
    printf("----------\t-------\n");
    
    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);  // Fixed: use floats
        printf("%3.0f\t\t%6.1f\n", fahr, celsius);
        fahr = fahr + steps;
    }
    
    return 0;  // Added return statement
}
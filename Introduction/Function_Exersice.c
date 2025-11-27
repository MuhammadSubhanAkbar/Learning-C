#include <stdio.h>
#include <conio.h>

int Conversion(void);

int main()
{
    Conversion();
    getch();
    return 0;
}

int Conversion(void)
{
    float fahr, celsius;
    int lower, upper, steps;

    // Get inputs in logical order
    printf("Enter lower limit (Fahrenheit): ");
    scanf("%d", &lower);
    
    printf("Enter upper limit (Fahrenheit): ");
    scanf("%d", &upper);
    
    printf("Enter step size: ");
    scanf("%d", &steps);

    // Input validation
    if (steps <= 0) {
        printf("Error: Step size must be positive!\n");
        return 1;
    }
    
    if (lower > upper) {
        printf("Error: Lower limit cannot be greater than upper limit!\n");
        return 1;
    }

    // Display conversion table
    fahr = lower;
    printf("\nFahrenheit\tCelsius\n");
    printf("----------\t-------\n");
    
    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f\t\t%6.1f\n", fahr, celsius);
        fahr = fahr + steps;
    }
    
    return 0;
}
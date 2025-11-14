#include <stdio.h>
#include <conio.h>

int power (int m, int n);

int main()
{
    int i;
    int variable;

    printf("What is the variable:");
    scanf("%d",&variable);

    printf("=====Power of function to the 10=====");
    for(i = 0; i < 10; ++i)
    {
        printf("%d \t %d\n",i, power(variable,i), power(-3, i));
    }
    return 0;
}

// Power: raise base to n-th power; n >=0
int power (int base, int n)
{
    int i, p;
    
    p = 1;

    for(i = 1; i <=n; ++i)
    {
        p = p* base;
    }
    return p;
}
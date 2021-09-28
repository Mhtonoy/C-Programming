/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

typedef struct Complex
{
    float real;
    float imag;
}complex;

void addNumber(complex c1, complex c2, complex* result);

int main()
{
    complex c1, c2, result;
    
    printf("For first number\n");
    printf("Enter real part: ");
    scanf("%f", &c1.real);
    printf("Enter imaginary part: ");
    scanf("%f", &c1.imag);
    
    printf("For second number\n");
    printf("Enter real part: ");
    scanf("%f", &c2.real);
    printf("Enter imaginary part: ");
    scanf("%f", &c2.imag);
    
    addNumber(c1,c2,&result);
    
    printf("real part = %f\n", result.real);
    printf("imaginary part = %f\n", result.imag);

    return 0;
}

void addNumber(complex c1, complex c2, complex* result)
{
    result->real = c1.real + c2.real;
    result->imag = c1.imag + c2.imag;
}

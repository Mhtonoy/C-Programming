/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


struct Squre
{
    float l, h;
};

struct Box
{
    float l, w, h;
}b1,b2;

typedef struct Book
{
    float l,w,h;
}book;
int main()
{
    struct Squre s1;
    s1.l = 10.12;
    s1.h = 12.23;
    printf("Area = %.2f\n", (s1.h * s1.l));
    
    b1.l = 12.33;
    b1.w = 13.23;
    b1.h = 15.45;
    printf("Density of b1 = %.2f\n", (b1.h * b1.l * b1.w));
    
    b2.l = 15.33;
    b2.w = 13.23;
    b2.h = 15.45;
    printf("Density of b2 = %.2f\n", (b2.h * b2.l * b2.w));
    
    book b1;
    b1.l = 12.33;
    b1.w = 13.23;
    b1.h = 15.45;
    printf("Density of book b1 = %.2f\n", (b1.h * b1.l * b1.w));
    return 0;
}



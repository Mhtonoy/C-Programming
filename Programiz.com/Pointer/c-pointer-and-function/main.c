/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void swap(int* p1, int* p2);
void addOne(int* p)
{
    (*p)++;
}

int main()
{
    int num1 = 10, num2 = 20;
    int* p, i = 30;
    swap(&num1, &num2);
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n\n", num2);
    
    p = &i;
    addOne(p);
    
    printf("P = %d\n", *p);
    return 0;
    
}
void swap(int* p1, int* p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    
}
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

struct Course
{
    char subject[30];
    int marks;
};

int main()
{
    struct Course *ptr;
    int n;
    
    printf("Enter number of records: ");
    scanf("%d",&n);
    
    ptr = (struct Course*) malloc(n * sizeof(struct Course));

    return 0;
}

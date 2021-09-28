/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char a[] = "Program";
    char b[] = {'P','r','o','g','r','a','m','\0'};
    char c[20];
    
    printf("Enter String: ");
    gets(c);
    
    printf("Length of string a: %d\n", strlen(a));
    printf("Length of string b: %d\n", strlen(b));
    printf("Length of string b: %d\n", strlen(c));

    return 0;
}

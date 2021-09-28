/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "C programming is easy.", str2[50], str3[60], str4[50];
    char* strPtr;
    
    strcpy(str2, str1);
    strcpy(str3, "This is str3");
    
    strPtr = str1;
    strcpy(str4, strPtr);
    
    puts(str2);
    puts(str3);
    puts(str4);
    
    strcat(str1, "I love c programming");
    
    puts(str1);

    return 0;
}

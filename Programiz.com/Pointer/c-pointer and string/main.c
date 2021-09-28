/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char name[] = "Harry Potter", *namePtr;
    
    printf("%c\n", *name);
     printf("%c\n", *(name+1));
      printf("%c\n", *(name+2));
      
      namePtr = name;
        printf("%c\n", *namePtr);
         printf("%c\n", *(namePtr+1));
          printf("%c\n", *(namePtr+2));
    return 0;
}

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char str1[] ="abcd", str2[] = "efgh", str3[] = "abcd", str4[] = "abCd", *strPtr;
    int result;
    
    result = strcmp(str1,str2);
    printf("strcmp(str1, str2) = %d\n", result);
    
    result = strcmp(str1,str3);
    printf("strcmp(str1, str3) = %d\n", result);
    
    result = strcmp(str1,str4);
    printf("strcmp(str1, str4) = %d\n", result);
    
    strPtr = str3;
    result = strcmp(str1,strPtr);
    printf("strcmp(str1, strPtr) = %d\n", result);

    return 0;
}

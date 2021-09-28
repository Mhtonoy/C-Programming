/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

struct Person
{
    char name[50];
    int age;
};

int main()
{
    struct Person p[3];
    int i;
    
    for(i = 0; i < 3; i++)
    {
        scanf("%s %d", (p+i)->name, &(p+i)->age);
    }
    printf("Displaying Information\n");
    for(i = 0; i < 3; i++)
    {
        printf("Name = %s\tAge = %d\n", (p+i)->name, (p+i)->age);
    }
    return 0;
}

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

struct student
{
    char name[30];
    int age;
};

struct student getInformation();

int main()
{
    struct student s;
    
    s = getInformation();
    
    printf("Displaying Information\n");
    printf("Name: %s", s.name);
    printf("\nAge: %d", s.age);

    return 0;
}

struct student getInformation()
{
    struct student s;
    
    printf("Enter name: ");
    scanf("%[^\n]%*c", s.name);
    
    printf("Enter age: ");
    scanf("%d", &s.age);
    
    return s;
}
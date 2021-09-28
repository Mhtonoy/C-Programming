/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

struct Student
{
    char name[20];
    int roll;
    float marks;
};

int main()
{
    struct Student s;
    
    printf("Enter Information,\n");
    printf("Enter name: ");
    scanf("%s", s.name);
    
    printf("Enter roll: ");
    scanf("%d", &s.roll);
    
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    
    printf("Displaying Information,\n");
    printf("Name: %s\n", s.name);
    printf("Roll: %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);
    
    
    
    
    return 0;
}

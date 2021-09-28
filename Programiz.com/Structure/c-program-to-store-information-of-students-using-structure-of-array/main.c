/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
struct Student
{
    char name[30];
    int roll;
    float marks;
}s[3];

int main()
{
    int i;
    printf("Enter name, roll and marks respectively\n");
    for(i = 0; i < 3; i++)
    {
        //fgets((s+i)->name, sizeof((s+i)->name), stdin); it has a problem;
        //gets((s+i)->name); it has a problem;
        scanf("%s %d %f",(s+i)->name ,&(s+i)->roll, &(s+i)->marks);
        // scanf("%[^\n]%*c %d %f", &s[i].name, &s[i].roll, &s[i].marks);
    }
    
    printf("Displaying Information\n");
    for(i = 0; i < 3; i++)
    {
        printf("Name = %s\tRoll = %d\tMarks = %f\n", (s+i)->name, (s+i)->roll, (s+i)->marks);
       // printf("Name = %s\tRoll = %d\tMarks = %f\n", s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}

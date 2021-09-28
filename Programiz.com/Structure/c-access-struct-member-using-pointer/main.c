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
    float weight;
}*personPtr, p1;

int main()
{
    personPtr = &p1;
    printf("Enter name: ");
    fgets(personPtr->name, sizeof(personPtr->name), stdin);
    printf("Enter age: ");
    scanf("%d", &personPtr->age);
    printf("Enter weight: ");
    scanf("%f", &personPtr->weight);
    
    printf("Displaying: \n");
    printf("Name = %s\n Age = %d\n weight = %.2f", personPtr->name,personPtr->age,personPtr->weight);


    return 0;
}

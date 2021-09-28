/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

struct Person
{
    char name[50];
    int age;
    float weight;
};

int main()
{
    struct Person *ptr;
    int i,n;
    
    printf("Enter the number of persons: ");
    scanf("%d", &n);
    
    ptr = (struct Person*) malloc(n * sizeof(struct Person));
    
    printf("Enter name, age and weight respectively: ");
    for(i = 0; i < n ; ++i)
    {
        scanf("%s %d %f", (ptr+i)->name, &(ptr+i)->age, &(ptr+i)->weight);
    }
    
    printf("Displaying Information\n");
    for(i = 0; i < n ; ++i)
    {
        printf("Name = %s \t Age = %d \t Weight = %f\n", (ptr+i)->name, (ptr+i)->age, (ptr+i)->weight);
    }

    return 0;
}

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

struct Student
{
    char name[30];
    int age;
};

void display(struct Student s);
void show(struct Student *s);

int main()
{
    struct Student s1;
    
    printf("Enter name: ");
    scanf("%[^\n]%*c", s1.name);
    
    printf("Enter age: ");
    scanf("%d", &s1.age);
    
    display(s1);
    show(&s1);

    return 0;
}

void display(struct Student s) 
{
  printf("\nDisplaying information\n");
  printf("Name: %s", s.name);
  printf("\nAge: %d", s.age);
}

void show(struct Student* s) 
{
  printf("\nShowing information\n");
  printf("Name: %s", s->name);
  printf("\nAge: %d", s->age);
}

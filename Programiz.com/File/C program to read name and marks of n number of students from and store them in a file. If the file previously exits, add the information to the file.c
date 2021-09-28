#include <stdio.h>
int main()
{
    char name[50];
    int marks, num, i;
    FILE *fptr;

    printf("Enter number of students: ");
    scanf("%d",&num);

    fptr = fopen("student.txt", "a");
    for(i = 0; i < num; i++)
    {
        printf("For student %d\nEnter Name: ", i+1);
        scanf("%s", name);
        printf("Enter marks: ");
        scanf("%d", &marks);

        fprintf(fptr,"Name = %s\nMarks = %d\n", name,marks);
    }
    fclose(fptr);
}

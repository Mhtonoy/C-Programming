#include <stdio.h>

int main()
{
    int num;
    FILE *fptr;

    fptr = fopen("program.txt", "r");
    if(fptr == NULL)
    {
        printf("Error! opening file\n");
        exit(0);
    }
    fscanf(fptr, "%d", &num);
    printf("Value of num = %d\n", num);
    fclose(fptr);
    return 0;
}

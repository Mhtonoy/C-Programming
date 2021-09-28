#include <stdio.h>
struct ThreeNum
{
    int n1,n2,n3;
};

int main()
{
    struct ThreeNum num;
    FILE *fptr;
    int n;

    fptr = fopen("program.bin", "wb");
    if(fptr == NULL)
    {
        printf("Error in opening file\n");
        exit(0);
    }
    for(n = 1; n < 5; ++n)
    {
      num.n1 = n;
      num.n2 = 5*n;
      num.n3 = 5*n + 1;
      fwrite(&num, sizeof(struct ThreeNum), 1, fptr);
    }
    fclose(fptr);
    return 0;
}

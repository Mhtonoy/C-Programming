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
    //int n1,n2,n3;

    fptr = fopen("p.bin", "rb");
    if(fptr == NULL)
    {
        printf("Eror in opening file\n");
        exit(0);
    }
    for(n = 1; n < 5; ++n)
    {
        fread(&num, sizeof(struct ThreeNum), 1, fptr);
        printf("n1 = %d\tn2 = %d\tn3 = %d\n", num.n1, num.n2, num.n3);
    }
    fclose(fptr);
}

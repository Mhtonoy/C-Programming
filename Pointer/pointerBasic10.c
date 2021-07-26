#include<stdio.h>
int main(){
    int *p, *q;
    *p = *q;
    printf("Pointer p pointing to %d\n", *p);
    printf("This is a new line\n");
    return 0;
}
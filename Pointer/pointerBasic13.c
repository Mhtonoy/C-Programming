//pointer arithemetic addition
#include<stdio.h>

int main(){
    int a[] = {1, 2, 3, 4, 5, 6}, *p = &a[0];
    p = p + 3;

    printf("Address of fourth element of array is %p\n", &a[3]);
    printf("Address of fourth element of array is %p\n", p);
    printf("Value of fourth element of array is %d\n", *p);

    return 0;
}
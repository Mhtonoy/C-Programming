#include <stdio.h>

int *fun(int a[], int length){
    return &a[length/2];
}

int main(){
    int a[] = {1,2,3,4,5,6};
    int length = sizeof(a)/sizeof(a[0]);
    int *p = fun(a, length);
    printf("Address of mid element is %p\n", p);
    printf("Value of mid element is %d\n", *p);

    return 0;
}
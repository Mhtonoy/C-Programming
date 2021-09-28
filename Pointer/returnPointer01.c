#include <stdio.h>

int *fun(int a[]){
    return &a[3];
}
int main(){
    int a[] = {1,2,3,4,5,6}, *p = &a[0];
    p = fun(a);
    printf("Address of a[3] is %p\n", p);
    printf("Address of a[3] is %x\n", p);
    printf("Value of a[3] is %d\n", *p);
    return 0;
}
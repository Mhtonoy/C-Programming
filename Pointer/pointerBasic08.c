#include<stdio.h>
int main(){
    int x = 10, *p = &x, *q;
    printf("Address of x is %x\n", p);
    q = p;
    printf("Address of x is %x\n", q);
    printf("Value of x is %x\n", *q);

    return 0;
}
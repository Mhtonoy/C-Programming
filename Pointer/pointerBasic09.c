#include<stdio.h>
int main(){
    int x = 10, y = 20, *p = &x, *q = &y;
    printf("Address of x is %x and value of x is %d\n", p, *p);
    printf("Address of y is %x and value of y is %d\n", q, *q);
    *q = *p;
    printf("Address of x is %x and value of x is %d\n", p, *p);
    printf("Address of y is %x and value of y is %d\n", q, *q);

    return 0;
}
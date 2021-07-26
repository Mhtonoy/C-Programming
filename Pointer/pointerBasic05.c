#include<stdio.h>
int main(){
    int number=20, *p = &number;
    *p = 30;
    printf("Address of number variable is %d\n", p);
    printf("Address of number variable is %x\n", p);
    printf("Value of number variable is %d\n", *p);

    return 0;
}
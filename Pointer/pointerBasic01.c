//pointer declearing and initialization
#include<stdio.h>
int main(){
    int number, *p;
    number = 10;
    p = &number;
    printf("Address of number variable is %d\n", p);//print address in decimal form
    printf("Address of number variable is %x\n", p);//print address in Hex form
    printf("Value of number variable is %d\n", *p);

    return 0;
}
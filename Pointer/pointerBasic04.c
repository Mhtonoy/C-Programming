//pointer declearing and initialization
#include<stdio.h>
int main(){
    int number, *p=&number;
    printf("Address of number variable is %d\n", p);
    printf("Address of number variable is %x\n", p);
    printf("Address of number variable is %x\n", &number);
    printf("Value of number variable is %d\n", *p);//print garbage value

    return 0;
}
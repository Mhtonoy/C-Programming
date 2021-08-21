//pointer declearing and initialization
#include<stdio.h>
int main(){
    int number, *p=&number;
    number = 10;
    
    printf("Address of number variable is %d\n", p);
    printf("Address of number variable is %x\n", p);
    printf("Value of number variable is %d\n", *p);

    return 0;
}
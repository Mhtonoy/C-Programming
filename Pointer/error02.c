//Assigning value to an uninitialized pointer is dangerous
#include<stdio.h>
int main(){
    int *p;
    *p = 1;
    printf("Value is %d\n", *p);//Segmentation fault
    return 0;
}
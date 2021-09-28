//never even try to return the address of an automatic variable
#include <stdio.h>

int *fun(int i){
    i = 10;
    printf("Address of i is %p\n", &i);
    return &i;
}
int main(){
    int *p = fun(5);
    printf("Address of i is %p\n", p);
    printf("Value of i is %d\n", *p);

    return 0;
}
//Warning: function returns address of local variable
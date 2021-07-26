#include <stdio.h>

int *fun(const int *p){
    //*p = 0;
}

int main(){
    const int i = 10;
    fun(&i);
    printf("Value of i is %d\n", i);
}
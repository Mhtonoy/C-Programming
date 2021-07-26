#include <stdio.h>

int *fun(int *p){
    *p = 0;
}

int main(){
    int i = 10;
    fun(&i);
    printf("Value of i is %d\n", i);
}
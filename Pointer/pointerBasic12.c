//Question 2: What is the output of the following program
#include <stdio.h>

int *fun(const int *p){
    *p = 0;
}

int main(){
    const int i = 10;
    fun(&i);
    printf("Value of i is %d\n", i);
}
//Error: Assignment of read-only location *p
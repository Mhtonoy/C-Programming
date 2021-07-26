#include<stdio.h>
int main(){
    int *p;
    printf("%d\n", &p);
    //printf("P is pointing to %d\n", p);
    printf("Value is %d\n", *p);
    return 0;
}
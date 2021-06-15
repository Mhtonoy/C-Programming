#include<stdio.h>
int main(){
    int a[][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {10,20,30}
    };

    printf("Number of elements in a is %d\n", sizeof(a)/sizeof(a[1][0]));
    return 0;
}
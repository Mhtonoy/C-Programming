#include<stdio.h>
int main(){
    const int a[] = {10, 20, 30, 40, 50, 60};

    a[1] = 21;
    printf("%d", a[1]);
    return 0;
}
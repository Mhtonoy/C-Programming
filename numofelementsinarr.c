#include<stdio.h>
int main(){
    int a[] = {10,20,30,40,50,60,70,80,90,100,110,112,23,45,87,909,87,64,56,45,34};
    printf("Size of array a is %d bytes\n", sizeof(a));
    printf("Size of an array element is %d bytes\n", sizeof(a[0]));
    printf("Number of elements in array a is %d\n", sizeof(a)/sizeof(a[0])); 

    return 0;
}
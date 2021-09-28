//Pointer application: Finding the largest and smallest element of an array

#include<stdio.h>
int findMaxMin(int a[],int length,int *max,int *min){
    *max = *min = a[0];
    int i;
    for(i=0; i<length; i++){
        if(a[i] > *max){
            *max = a[i];
        }else if(a[i] < *min){
            *min = a[i];
        }
    }
}
int main(){
    int a[] = {45, 56,761, 11, 10,43, 55};
    int max, min, length;

    length = sizeof(a)/sizeof(a[0]);
    findMaxMin(a, length, &max, &min);
    printf("Maximum value is %d \nMinimum value is %d", max, min);

    return 0;
}
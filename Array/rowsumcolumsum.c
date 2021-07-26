#include<stdio.h>
int main(){
    int array[][5]={
        {8,3,9,0,10},
        {3,5,17,1,1},
        {2,8,6,23,1},
        {15,7,3,2,9},
        {6,14,2,6,0}
    };
    int total = 0, i,j;
    printf("Row Total: ");
    for(i=0; i<5; i++){
        for(j=0; j<5; j++)
            total += array[i][j];
        printf("%d ", total);
        total = 0;
    }
    printf("\nColumn Total: ");
    for(i=0; i<5; i++){
        for(j=0; j<5; j++)
            total += array[j][i];
        printf("%d ", total);
        total = 0;
    }
}
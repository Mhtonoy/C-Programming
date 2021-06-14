#include<stdio.h>
int main(){
    int aRows, aColumns, bRows, bColumns, i, j;
    printf("Enter num of rows and colums of first matrix: ");
    scanf("%d %d", &aRows, &aColumns);
    int a[aRows][aColumns];
    printf("Enter elements for first matrix\n");
    for(i=0; i<aRows; i++){
        for(j=0; j<aColumns; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter num of rows and colums of second matrix: ");
    scanf("%d %d", &bRows, &bColumns);
    int b[bRows][bColumns];
    printf("Enter elements for second matrix\n");
    for(i=0; i<aRows; i++){
        for(j=0; j<bColumns; j++){
            scanf("%d", &b[i][j]);
        }
    }

    if(aRows != bRows || aColumns != bColumns){
        printf("Sorry, matrix addition is not possible");
        return 0;
    }
    
    int result[aRows][aColumns];
    for(i=0; i<aRows; i++){
        for(j=0; j<aColumns; j++){
            result[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Matrix addition is\n");
    for(i=0; i<aRows; i++){
        for(j=0; j<aColumns; j++){
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
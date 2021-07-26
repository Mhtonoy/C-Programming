#include <stdio.h>
#define MAX 50
int main(){
    int a[MAX][MAX], b[MAX][MAX], result[MAX][MAX], i, j, k, sum = 0;
    int arows,acolumns,brows,bcolumns;

    printf("Enter number of columns and rows of first matrix: ");
    scanf("%d %d", &arows, &acolumns);

    printf("Enter the elements\n");
    for(i=0; i<arows; i++){
        for (j = 0; j < acolumns; j++)
        {
            scanf("%d", &a[i][j]);
        }
        
    }

    printf("Enter number of columns and rows of Second matrix: ");
    scanf("%d %d", &brows, &bcolumns);

    if(acolumns != brows){
        printf("Sorry,Multiplication is not possible\n");
        return 0;
    }

    printf("Enter the elements\n");
    for(i=0; i<brows; i++){
        for (j = 0; j < bcolumns; j++)
        {
            scanf("%d", &b[i][j]);
        }
        
    }

    //Multiplying two matrix
    for(i=0; i<arows; i++){
        for(j=0; j<bcolumns; j++){
            for(k=0; k<acolumns; k++){
                sum += a[i][k]*b[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }

    //display resultant matrix
    printf("Resultant Matrix is\n");
    for(i=0; i<arows; i++){
        for(j=0; j<bcolumns; j++){
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}
#include<stdio.h>

#define MAX 28

int find(int[], int);
void applyUnion(int[], int, int);
void print(int[], int, int);

typedef struct edge
{
    int u, v, w;
}edge;

edge data[MAX];

int main(){
    int totalNumberOfVertex = 8;
    int totalNumberOfEdge = 13;
    int arr[7][8] = {   
                        {0, 0, 6, 7, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 8, 6},
                        {0, 0, 0, 8, 9, 0, 14, 0},
                        {0, 0, 0, 0, 5, 4, 0, 0},
                        {0, 0, 0, 0, 0, 6, 10, 0},
                        {0, 0, 0, 0, 0, 0, 0, 7},
                        {0, 0, 0, 0, 0, 0, 0, 11},
                    };
    int min, edgeItem = 0;
    int i, j, k;
    int u, v, totalCost = 0;

    int set[8] = {0};
    int safeData[13] ={-1};

    //create edge and sort them in increaing order with respect to weight
    for(i = 0; i < totalNumberOfEdge; i++){
        min = 0;
        for(j = 0; j < 7; j++){
            
            for(k = j+1; k < 8; k++){
                if(arr[j][k] != 0){
                    if(min == 0){
                        min = arr[j][k];
                        u = j;
                        v = k;
                    }
                    if(arr[j][k] < min){
                        min = arr[j][k];
                        u = j;
                        v = k;
                 }
              }
            }
        }
        arr[u][v] = 0;
        data[edgeItem].u = u;
        data[edgeItem].v = v;
        data[edgeItem].w = min;
        edgeItem++;
    }

    for(i = 0; i < 8 ; i++){
        set[i] = i;
    }

    for(i = 0; i < totalNumberOfEdge; i++){
        u = find(set, data[i].u);
        v = find(set, data[i].v);

        //printf("%d %d\n", u, v);

        if(u != v){
            safeData[i] = 1;
            totalCost += data[i].w;
            applyUnion(set, u, v);
        }
    }

    print(safeData, totalCost, totalNumberOfEdge);

}

//find out whether two vertex are in the same set
int find(int set[], int vertex){
    return set[vertex];
}

void applyUnion(int set[], int u, int v){
    int i;
    for(i = 0; i < 8; i++){
        if(set[i] == v)
            set[i] = u;
    }
    
}


void print(int safeData[], int totalCost, int totalNumberOfEdge){
    int i;
    int j = 1;
    printf("\n");

    //print all the edges that form the MST with their weights
    printf("Edges that form the MST along with their corresponding weights\n\n");
    for(i = 0; i < totalNumberOfEdge; i++){
        if(safeData[i] == 1){
            printf("Edge %d -> vertex = %d, vertex = %d, weight = %d\n",j++, data[i].u, data[i].v, data[i].w);
        }
    }

    //print total cost
    printf("\nTotal minimum cost of the computed MST is %d\n\n", totalCost);
}
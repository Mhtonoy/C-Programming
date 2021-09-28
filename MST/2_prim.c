#include<stdio.h>

typedef struct vertex
{
    int t, key, pi;
}vertex;

vertex node[8];

int main(){
    int totalNumberOfVertex = 8;
    int totalNumberOfEdge = 13;
    int arr[8][8] = {   
                        {0, 0, 6, 7, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 8, 6},
                        {6, 0, 0, 8, 9, 0, 14, 0},
                        {7, 0, 8, 0, 5, 4, 0, 0},
                        {0, 0, 9, 5, 0, 6, 10, 0},
                        {0, 0, 0, 4, 6, 0, 0, 7},
                        {0, 8, 14, 0, 10, 0, 0, 11},
                        {0, 6, 0, 0, 0, 7, 11, 0},
                    };
    int i, j, k;
    int minVertex, minKey, totalCost = 0, numberOfTreeEdge=1, child=0;

    //Initialize every vertex
    for(i=0; i < totalNumberOfVertex; i++){
        node[i].t = 0;
        node[i].key = 32767;//assume 32767 is infinite
        node[i].pi = -2;
    }
    //initialize source vertex
    node[0].key = 0;
    minKey = node[0].key;
    minVertex = 0;

    //Prim's algorithm
    for(k=0; k<totalNumberOfVertex; k++){
        
        node[minVertex].t = 1;
        
        //find out adjacent vertex 
        for(j=1; j<totalNumberOfVertex; j++){
            if(arr[minVertex][j] != 0){
                if(node[j].key == 32767){
                    node[j].key = arr[minVertex][j];
                    node[j].pi  = minVertex;
                }
                else if((arr[minVertex][j] < node[j].key)&&(node[j].t == 0)){
                    node[j].key = arr[minVertex][j];
                    node[j].pi  = minVertex;
                }
  
            }
        }

        //find out minimum key value from the vertex which 'T' value is 0
        minKey = 0;
        for(i=1; i< totalNumberOfVertex; i++){
            if((node[i].t == 0) && (minKey == 0)){
                minKey = node[i].key;
                minVertex = i;
            }
            else if((node[i].key < minKey)&&(node[i].t == 0)){
                minKey = node[i].key;
                minVertex = i;
            }
            
        }
    }

   //print all edge that form the MST with their weighs
    k = 0;
    printf("\nEdges that form the MST along with their corresponding weights\n\n");
    for(i=1; i<totalNumberOfVertex; i++){
        k = child;
       for(j=1; j<totalNumberOfVertex; j++){
           if(node[j].pi == k){
               printf("Edge %d -> Vertex: %d, Vertex: %d, Weight: %d\n", numberOfTreeEdge++, k, j, node[j].key);
               child = j;
           }
       }
       
    }

    //Calculate total minimum cost
    for(i=1; i<totalNumberOfVertex; i++){
        totalCost += node[i].key;
    }

    //print total minimum cost
    printf("\nTotal minimum cost of the MST is %d\n\n", totalCost);
}

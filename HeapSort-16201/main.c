#include <stdio.h>

    void swap(int *a, int *b){
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    
    void maxHeapify(int arr[], int n, int i) {
        // Find largest among root, left child and right child
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;
    
        if (left < n && arr[left] > arr[largest])
            largest = left;
    
        if (right < n && arr[right] > arr[largest])
            largest = right;
    
        // Swap and continue heapifying if root is not largest
        if (largest != i) {
            swap(&arr[i], &arr[largest]);
            maxHeapify(arr, n, largest);
        }
    }
    
    void ascendingHeapSort(int arr[], int n) {
        // Build max heap
        for (int i = n / 2 - 1; i >= 0; i--)
            maxHeapify(arr, n, i);
    
        // Heap sort for sorting the array in ascending order
        for (int i = n - 1; i >= 0; i--) {
            swap(&arr[0], &arr[i]);
            maxHeapify(arr, i, 0);
        }
    }
    
    int verifyAscendingArray(int arr[]){
        int number, i = 0;
        FILE *fp;

        fp = fopen("numbers_sorted_ascending.txt", "r");

        if (fp == NULL)
        {
            printf("Can't open file for reading.\n");
        }
        else
        {   
            
            while(fscanf(fp, "%d", &number) != EOF){
                if(arr[i] != number){
                    fclose(fp);
                    return -1;
                }
                i++;
            }
            fclose(fp);
            return 0;
        }
    }

    void minHeapify(int arr[], int n, int i) {
        // Find smallest among root, left child and right child
        int smallest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;
    
        if (left < n && arr[left] < arr[smallest])
            smallest = left;
    
        if (right < n && arr[right] < arr[smallest])
            smallest = right;
    
        // Swap and continue heapifying if root is not smallest
        if (smallest != i) {
            swap(&arr[i], &arr[smallest]);
            minHeapify(arr, n, smallest);
        }
    }
    
    void descendingHeapSort(int arr[], int n) {
        // Build min heap
        for (int i = n / 2 - 1; i >= 0; i--)
            minHeapify(arr, n, i);
    
        // Heap sort for sorting the array in descending order
        for (int i = n - 1; i > 0; i--) {
            swap(&arr[0], &arr[i]);
            minHeapify(arr, i, 0);
        }
    }

    int verifyDescendingArray(int arr[]){
        int number, i = 0;
        FILE *fp;

        fp = fopen("numbers_sorted_descending.txt", "r");

        if (fp == NULL)
        {
            printf("Can't open file for reading.\n");
        }
        else
        {   
            
            while(fscanf(fp, "%d", &number) != EOF){
                if(arr[i] != number){
                    fclose(fp);
                    return -1;
                }
                i++;
            }
            fclose(fp);
            return 0;
        }
    }
    
    // Print an array
    // void printArray(int arr[], int n) {
    //     int i = 0;
    //     for (i = 0; i < n; ++i){
    //         printf("%d  ", arr[i]);
    //         if((i+1) % 10 == 0)
    //             printf("\n");
    //     }
    // }
    
    //Main Function
    int main()
    {
        int array1[99999],array2[99999], number, i = 0, j = 0, ascendingFlag = -1;
        int descendingFlag = -1;
        FILE *fp;
        
        fp = fopen("numbers.txt", "r");

            if (fp == NULL)
            {
                printf("Can't open file for reading.\n");
            }
            else
            {   
                //Read numbers from numbers.txt file and store in array1 and array2
                while(fscanf(fp, "%d", &number) != EOF){
                    array1[i] = number;
                    array2[i] = number;
                    i++;
                }
            }
        fclose(fp);

        //sort array1 in ascending order
        ascendingHeapSort(array1, 99999);

        //print array1
        //printArray(array1, 99999);

        //verify array1 with numbers_sorted_ascending.txt
        ascendingFlag = verifyAscendingArray(array1);

            if(ascendingFlag == 0){
                printf("\narray1 is sorted in ascending order as like \"numbers_sorted_ascending.txt\".\n");
            }
            else{
                printf("\narray1 is not sorted in ascending order as like \"numbers_sorted_ascending.txt\".\n");
            }

        // printf("\n\n-----------------------------------------------------------------\n\n");
        
        //sort array2 in descending order
        descendingHeapSort(array2, 99999);

        //print array2
        //printArray(array2, 99999);

        //verify array2 with numbers_sorted_descending.txt
        descendingFlag = verifyDescendingArray(array2);

            if(descendingFlag == 0){
                printf("\narray2 is sorted in descending order as like \"numbers_sorted_descending.txt\".\n\n");
            }
            else{
                printf("\narray2 is not sorted in descending order as like \"numbers_sorted_descending.txt\".\n\n");
            }
        
        return 0;
    }
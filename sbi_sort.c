#include <stdio.h>
#include <stdlib.h>

void insertionSort(int arr[], int size){
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i-1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
        key++;
    }
}

void bubbleSort(int arr[], int size){
    int temp;
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(arr[i]<arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void selectionSort(int arr[], int size){
//arr[]={3,2,4,55,73,23,895,3245,6807,2378,345,843,68,1,0,-374};
    for(int i=0; i<size; i++){
        int swap;
        for(int j=0; j<size; j++){
            if(arr[i]<arr[j]){
                swap = arr[i];
                arr[i] = arr[j];
                arr[j] = swap;
            }
        }
    }
}
void display(int arr[], int size){
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size;
    printf("Enter the Array Size in Integers: ");
    scanf("%d", &size);
    int *arr = (int*)malloc(size*sizeof(int));

    printf("Enter Array Elements: ");
    for(int i=0; i<size; i++){
        printf("%dth Element : ", i);
        scanf("%d", &arr[i]);
    }

    printf("Original Array : ");
    display(arr,size);

    insertionSort(arr,size);
    printf("Insertion Sorted Array : ");
    display(arr,size);

    bubbleSort(arr,size);
    printf("Bubble Sorted Array : ");
    display(arr,size);

    selectionSort(arr,size);
    printf("Selection Sorted Array : ");
    display(arr,size);

free (arr);
return 0;
}
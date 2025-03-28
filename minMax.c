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

    printf("Smallest Number is : %d\n ", arr[0]);
    printf("Largest Number is : %d\n ", arr[size-1]);
    printf("Second Smallest Number is : %d\n ", arr[1]);
    printf("Second Largest Number is : %d\n ", arr[size-2]);

free (arr);
return 0;
}
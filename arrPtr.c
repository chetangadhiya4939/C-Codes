#include <stdio.h>

int main() {
    // Example 1: Arrays of Pointers
    printf("=== Arrays of Pointers ===\n");

    // Declare an array of 3 pointers to integers
    int a = 10, b = 20, c = 30;
    int *arr[3]; // array of 3 pointers to integers

    // Point each element of the array to the variables a, b, and c
    arr[0] = &a;
    arr[1] = &b;
    arr[2] = &c;

    // Accessing and printing the values using the array of pointers
    for (int i = 0; i < 3; i++) {
        printf("arr[%d] = %d\n", i, *arr[i]);
    }

    // Example 2: Pointers to Arrays
    printf("\n=== Pointers to Arrays ===\n");

    // Declare a 2D array (matrix) and a pointer to an array
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    
    // Declare a pointer to an array of 3 integers (pointer to row)
    int (*ptr)[3];

    // Point the pointer to the first row of the matrix
    ptr = matrix;

    // Accessing and printing the elements using pointer to array
    for (int i = 0; i < 2; i++) {
        printf("Row %d: ", i);
        for (int j = 0; j < 3; j++) {
            printf("%d ", ptr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

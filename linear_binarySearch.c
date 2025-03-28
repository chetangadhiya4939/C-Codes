#include <stdio.h>

void linearSearch(int n, int arr[], int size)
{
    int p = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == n)
        {
            printf("%d is the Searched Number\n", n);
            break;
        }
        p++;
    }
    printf("%d was at %dth place in Array\n", n, p);
}

void binarySearch(int n, int arr[], int size) {
    int low = 0;
    int high = size - 1;
    int mid;

    while (low <= high) {
        mid = (low + high) / 2;  // Calculate middle index

        if (arr[mid] == n) {
            printf("%d is found at index %d\n", n, mid);
            return;
        }
        else if (arr[mid] < n) {
            low = mid + 1;  // Search in the right half
        }
        else {
            high = mid - 1;  // Search in the left half
        }
    }

    printf("%d is not found in the array.\n", n);
}


void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]); // Use %d to print integer values
    }
    printf("\n"); // Newline for cleaner output
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int n = 9;

    printf("Size is : %d\n", size);
    printf("Array is : ");

    display(arr, size);

    linearSearch(n, arr, size);
    binarySearch(n, arr, size);

    return 0;
}

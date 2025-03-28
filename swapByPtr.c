#include <stdio.h>

// Function to swap two numbers using their addresses
void swap(int *a, int *b) {
    int temp;
    
    // Swap the values using a temporary variable
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;
    
    // Input two numbers from the user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    // Display values before swapping
    printf("\nBefore swapping:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);
    
    // Call the swap function, passing addresses of num1 and num2
    swap(&num1, &num2);
    
    // Display values after swapping
    printf("\nAfter swapping:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);
    
    return 0;
}

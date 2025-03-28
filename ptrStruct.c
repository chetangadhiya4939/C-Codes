#include <stdio.h>
#include <string.h>

// Define the structure
struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    // Create a variable of type 'struct Student'
    struct Student student1 = {"John Doe", 20, 85.5};
    
    // Declare a pointer to the structure
    struct Student *ptr;
    
    // Assign the address of student1 to the pointer
    ptr = &student1;
    
    // Access and modify members of the structure using the pointer
    printf("Using pointer to access the structure members:\n");
    
    // Accessing data using the pointer
    printf("Name: %s\n", ptr->name);   // '->' is used to access members through pointer
    printf("Age: %d\n", ptr->age);
    printf("Marks: %.2f\n", ptr->marks);
    
    // Modify data using the pointer
    strcpy(ptr->name, "Alice Smith");
    ptr->age = 22;
    ptr->marks = 92.5;
    
    printf("\nAfter modification using pointer:\n");
    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);
    printf("Marks: %.2f\n", ptr->marks);
    
    return 0;
}

#include<stdio.h>
#include<string.h>

struct student {
    char name[50];  // Changed from 'char name' to 'char name[50]' to store a string
    int roll;
    int marks;
};

int main() {
    struct student arr[5];

    // Initialize student data
    strcpy(arr[0].name , "Ghanu");
    arr[0].roll = 1;
    arr[0].marks = 100;
    
    strcpy(arr[1].name , "Gyan");
    arr[1].roll = 2;
    arr[1].marks = 100;
    
    strcpy(arr[2].name , "Ishwar");
    arr[2].roll = 3;
    arr[2].marks = 100;
    
    strcpy(arr[3].name , "Vala");
    arr[3].roll = 4;
    arr[3].marks = 100;
    
    strcpy(arr[4].name , "Snehalu");
    arr[4].roll = 1;
    arr[4].marks = 100;
    
    // Display student information
    for(int i = 0; i < 5; i++) {
        printf("Student %d\n", i+1);
        printf("Name : %s\n", arr[i].name);  // Use %s for printing strings
        printf("Roll no. %d\n", arr[i].roll);
        printf("Marks : %d\n", arr[i].marks);
    }

    return 0;
}

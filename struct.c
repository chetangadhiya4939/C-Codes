#include <stdio.h>
#include <string.h>

struct student{
    char *name;
    int roll;
    char *address;
}student1,student2,student3;//1 method for making variables of the structure Student
// another method is write : "struct student student1;" in main function.

int main(){
    student1.name = "Ghanu Pandey";
    student1.roll = 1;
    student1. address = "Akshardham";

    student2.name = "Guruji";
    student2.roll = 2;
    student2. address = "Kundaldham";

    student3.name = "Chetan Gadhiya";
    student3.roll = 3;
    student3. address = "Gandhinagar";

printf(" Name of 1st Student is : %s\n", student1.name);
printf(" Roll of 2nd Student: %d\n", student2.roll);
printf(" Address of 3rd Student: %s\n", student3.address);
}
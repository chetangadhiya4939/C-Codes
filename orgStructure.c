#include <stdio.h>
#include <string.h>

// Define the Employee structure
struct Employee {
    int employeeID;
    double employeeSalary;
    char employeeName[50];
};

// Define the Organization structure
struct Organization {
    int organizationID;
    char organizationName[50];
    struct Employee employees[2]; // Each organization has 2 employees
};

int main() {
    // Create two organizations
    struct Organization org1, org2;

    // Initialize first organization
    org1.organizationID = 1;
    strcpy(org1.organizationName, "Tech Innovators");//direct assignment of string to char array is not allowed in c
//that's why we uses strcpy to copy the string to the char array.
    org1.employees[0].employeeID = 101;
    strcpy(org1.employees[0].employeeName, "Alice Johnson");
    org1.employees[0].employeeSalary = 50000;

    org1.employees[1].employeeID = 102;
    strcpy(org1.employees[1].employeeName, "Bob Smith");
    org1.employees[1].employeeSalary = 55000;

    // Initialize second organization
    org2.organizationID = 2;
    strcpy(org2.organizationName, "Creative Solutions");

    org2.employees[0].employeeID = 201;
    strcpy(org2.employees[0].employeeName, "Charlie Brown");
    org2.employees[0].employeeSalary = 60000;

    org2.employees[1].employeeID = 202;
    strcpy(org2.employees[1].employeeName, "Dana Lee");
    org2.employees[1].employeeSalary = 65000;

    // Output the details of the organizations and their employees
    printf("Organization 1: %s (ID: %d)\n", org1.organizationName, org1.organizationID);
    for (int i = 0; i < 2; ++i) {
        printf("  Employee ID: %d, Name: %s, Salary: %.2f\n", org1.employees[i].employeeID, org1.employees[i].employeeName, org1.employees[i].employeeSalary);
    }

    printf("\nOrganization 2: %s (ID: %d)\n", org2.organizationName, org2.organizationID);
    for (int i = 0; i < 2; ++i) {
        printf("  Employee ID: %d, Name: %s, Salary: %.2f\n", org2.employees[i].employeeID, org2.employees[i].employeeName, org2.employees[i].employeeSalary);
    }

    return 0;
}

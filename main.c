#include <stdio.h>

// Define a structure to store employee details
struct Employee {
    char name[50];
    int employeeID;
    float experience;
    float salary;
};

int main() {
    // Declare an array of structures to store details of 5 employees
    struct Employee employees[5];

    // Input details for each employee
    for (int i = 0; i < 5; ++i) {
        printf("Enter details for Employee %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", employees[i].name);

        printf("Employee ID: ");
        scanf("%d", &employees[i].employeeID);

        printf("Experience (in years): ");
        scanf("%f", &employees[i].experience);

        printf("Salary: ");
        scanf("%f", &employees[i].salary);

        printf("\n");
    }

    // Print details of each employee
    printf("Details of Employees:\n");
    for (int i = 0; i < 5; ++i) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Name: %s\n", employees[i].name);
        printf("Employee ID: %d\n", employees[i].employeeID);
        printf("Experience: %.2f years\n", employees[i].experience);
        printf("Salary: %.2f\n", employees[i].salary);
    }

    return 0;
}

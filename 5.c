#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    char designation[50];
    float salary;
};

int main() {
    FILE *fp;
    struct Employee emp;
    char ch;

    fp = fopen("employee.txt", "w+"); // open file in write mode
    if (fp == NULL) {
        printf("Could not open file\n");
        return 1;
    }

    do {
        printf("Enter employee's name: ");
        fgets(emp.name, sizeof(emp.name), stdin);
        emp.name[strlen(emp.name) - 1] = '\0'; // remove newline character

        printf("Enter employee's designation: ");
        fgets(emp.designation, sizeof(emp.designation), stdin);
        emp.designation[strlen(emp.designation) - 1] = '\0'; // remove newline character

        printf("Enter employee's salary: ");
        scanf("%f", &emp.salary);

        fwrite(&emp, sizeof(emp), 1, fp); // write to file

        printf("Do you want to add another employee? (y/n): ");
        scanf(" %c", &ch);
    } while (ch == 'y' || ch == 'Y');

    fclose(fp); // close file

    fp = fopen("employee.txt", "r"); // open file in read mode
    if (fp == NULL) {
        printf("Could not open file\n");
        return 1;
    }

    printf("Employee's data:\n");
    while (fread(&emp, sizeof(emp), 1, fp) == 1) {
        printf("Name: %s\n", emp.name);
        printf("Designation: %s\n", emp.designation);
        printf("Salary: %.2f\n\n", emp.salary);
    }

    fclose(fp); // close file
    return 0;
}
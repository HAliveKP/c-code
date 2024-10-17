#include <stdio.h>

struct employee {
    char ename[100];
    char eaddress[100];
};

struct salarydetails {
    char pos[100];
    float salary;
    struct employee detail;
};

int main() {
    struct salarydetails payinfo[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter employee %d details:\n", i + 1);
        printf("Name: ");
        fgets(payinfo[i].detail.ename, sizeof(payinfo[i].detail.ename), stdin);
        payinfo[i].detail.ename[strlen(payinfo[i].detail.ename) - 1] = '\0'; 

        printf("Address: ");
        fgets(payinfo[i].detail.eaddress, sizeof(payinfo[i].detail.eaddress), stdin);
        payinfo[i].detail.eaddress[strlen(payinfo[i].detail.eaddress) - 1] = '\0';

        printf("Position: ");
        fgets(payinfo[i].pos, sizeof(payinfo[i].pos), stdin);
        payinfo[i].pos[strlen(payinfo[i].pos) - 1] = '\0'; 

        printf("Salary: ");
        scanf("%f", &payinfo[i].salary);
        getchar(); 
    }

   
    for (int i = 0; i < 5; i++) {
        printf("Employee %d details:\n", i + 1);
        printf("Name: %s\n", payinfo[i].detail.ename);
        printf("Address: %s\n", payinfo[i].detail.eaddress);
        printf("Position: %s\n", payinfo[i].pos);
        printf("Salary: %.2f\n\n", payinfo[i].salary);
    }

    return 0;
}
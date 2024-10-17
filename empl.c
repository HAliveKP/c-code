#include <stdio.h>

typedef struct {
    int id;
    char name[50];
    char subject[50];
} Teacher;

int main() {
    Teacher teachers[10];
    int i;

    // Input teacher details
    for (i = 0; i < 1; i++) {
        printf("Enter teacher %d details:\n", i + 1);
        printf("ID: ");
        scanf("%d", &teachers[i].id);
        printf("Name: ");
        scanf("%s", teachers[i].name);
        printf("Subject: ");
        scanf("%s", teachers[i].subject);
    }

    // Print teacher details
    printf("\nTeacher Details:\n");
    for (i = 0; i < 1; i++) {
        printf("ID: %d\n", teachers[i].id);
        printf("Name: %s\n", teachers[i].name);
        printf("Subject: %s\n\n", teachers[i].subject);
    }

    return 0;
}
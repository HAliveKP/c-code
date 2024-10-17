#include <stdio.h>

typedef struct {
    int id;
    char name[100];
    char subject[100];
} Teacher;

int main() {
    Teacher teachers[10];

    
    for (int i = 0; i < 10; i++) {
        printf("Enter teacher %d details:\n", i + 1);
        printf("ID: ");
        scanf("%d", &teachers[i].id);

        printf("Name: ");
        scanf("%s", teachers[i].name);

        printf("Subject: ");
        scanf("%s", teachers[i].subject);
    }

   
    printf("\nTeachers' Details:\n");
    for (int i = 0; i < 10; i++) {
        printf("Teacher %d:\n", i + 1);
        printf("ID: %d\n", teachers[i].id);
        printf("Name: %s\n", teachers[i].name);
        printf("Subject: %s\n\n", teachers[i].subject);
    }

    return 0;
}
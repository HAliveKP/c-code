#include <stdio.h>

union Student {
    int id;
    char name[50];
    int grade;
};

int main() {
    union Student student1, student2, student3;

    printf("Enter student ID: ");
    scanf("%d", &student1.id);

    printf("Enter student name: ");
    scanf("%s", student2.name);

    printf("Enter student grade: ");
    scanf(" %d", &student3.grade);

    printf("\nStudent Details:\n");
    printf("ID: %d\n", student1.id);
    printf("Name: %s\n", student2.name);
    printf("Grade: %d\n", student3.grade);

    return 0;
}
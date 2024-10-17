#include <stdio.h>
#include <string.h>

struct student {
    char name[50];
    int grade;
    float marks[5];
    float total;
    float percentage;
};

int main() {
    FILE *fp;
    struct student s;
    int i;

    fp = fopen("student.dat", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter student's name, grade and marks in five subjects:\n");
    scanf("%s %d", s.name, &s.grade);

    for (i = 0; i < 5; i++) {
        printf("Enter mark in subject %d: ", i + 1);
        scanf("%f", &s.marks[i]);
    }

    s.total = 0;
    for (i = 0; i < 5; i++) {
        s.total += s.marks[i];
    }
    s.percentage = (s.total / 500) * 100;

    fprintf(fp, "%s %d ", s.name, s.grade);
    for (i = 0; i < 5; i++) {
        fprintf(fp, "%f ", s.marks[i]);
    }
    fprintf(fp, "%f %f\n", s.total, s.percentage);

    fclose(fp);

    printf("Data stored successfully!\n");

    // Print students with percentage >= 80
    fp = fopen("student.dat", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Students with percentage >= 80:\n");
    while (fscanf(fp, "%s %d", s.name, &s.grade) != EOF) {
        for (i = 0; i < 5; i++) {
            fscanf(fp, "%f", &s.marks[i]);
        }
        fscanf(fp, "%f %f", &s.total, &s.percentage);
        if (s.percentage >= 80) {
            printf("%s %d ", s.name, s.grade);
            for (i = 0; i < 5; i++) {
                printf("%f ", s.marks[i]);
            }
            printf("%f %f\n", s.total, s.percentage);
        }
    }

    fclose(fp);

    return 0;
}
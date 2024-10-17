#include <stdio.h>

int main() {
    // Create a new file called "old_file.txt"
    FILE *fp = fopen("old_file.txt", "w");
    if (fp == NULL) {
        printf("Error creating file 'old_file.txt'\n");
        return 1;
    }
    fprintf(fp, "This is the content of the old file.");
    fclose(fp);
    printf("File 'old_file.txt' created.\n");

    // Rename the file from "old_file.txt" to "new_file.txt"
    if (rename("old_file.txt", "new_file.txt") != 0) {
        printf("Error renaming file 'old_file.txt' to 'new_file.txt'\n");
        return 1;
    }
    printf("File renamed from 'old_file.txt' to 'new_file.txt'.\n");

    // Remove the file "new_file.txt"
    if (remove("new_file.txt") != 0) {
        printf("Error removing file 'new_file.txt'\n");
        return 1;
    }
    printf("File 'new_file.txt' removed.\n");

    return 0;
}
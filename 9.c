#include <stdio.h>

int main() {
    FILE *fp;
    char str[] = "Hello, World!";

    // Open a file in write mode
    fp = fopen("example.txt", "w");
    if (fp == NULL) {
        printf("Could not open file\n");
        return 1;
    }

    // Write to the file
    fprintf(fp, "%s", str);

    // Get the current file position using ftell()
    long int position = ftell(fp);
    printf("Current file position: %ld\n", position);

    // Move the file pointer to the beginning of the file using fseek()
    fseek(fp, 0, SEEK_SET);
    printf("File pointer moved to the beginning of the file\n");

    // Get the current file position again using ftell()
    position = ftell(fp);
    printf("Current file position: %ld\n", position);

    // Move the file pointer to the end of the file using fseek()
    fseek(fp, 0, SEEK_END);
    printf("File pointer moved to the end of the file\n");

    // Get the current file position again using ftell()
    position = ftell(fp);
    printf("Current file position: %ld\n", position);

    // Move the file pointer to the beginning of the file using rewind()
    rewind(fp);
    printf("File pointer moved to the beginning of the file using rewind()\n");

    // Get the current file position again using ftell()
    position = ftell(fp);
    printf("Current file position: %ld\n", position);

    // Close the file
    fclose(fp);

    return 0;
}
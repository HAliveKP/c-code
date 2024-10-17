#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char book_name[50], edition[50];
    float price;
    char choice;

    fp = fopen("book.txt", "w");
    if (fp == NULL) {
        printf("Could not open file\n");
        return 1;
    }

    do {
        printf("Enter book's name (or 'n' to stop): ");
        scanf("%s", book_name);
        if (strcmp(book_name, "n") == 0)
            break;
        printf("Enter book's edition: ");
        scanf("%s", edition);
        printf("Enter book's price: ");
        scanf("%f", &price);

        fprintf(fp, "%s,%s,%.2f\n", book_name, edition, price);
    } while (1);

    fclose(fp);

    printf("Data stored in book.txt file.\n");

    // Print the data on screen
    fp = fopen("book.txt", "r");
    if (fp == NULL) {
        printf("Could not open file\n");
        return 1;
    }

    printf("Book Data:\n");
    while (!feof(fp)) {
        fscanf(fp, "%[^,],%[^,],%f\n", book_name, edition, &price);
        printf("Book Name: %s, Edition: %s, Price: %.2f\n", book_name, edition, price);
    }

    fclose(fp);

    return 0;
}
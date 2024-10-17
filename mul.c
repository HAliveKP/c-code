#include <stdio.h>

void print_table(int *num) {
    int i;
    printf("Multiplication table of %d:\n", *num);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", *num, i, (*num) * i);
    }
}

void main() {
    int num;
    int *ptr;

    printf("Enter a number: ");
    scanf("%d", &num);

    ptr = &num;

    print_table(ptr);

    return 0;
}
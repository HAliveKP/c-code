#include <stdio.h>

void check_even_odd(int *num) {
    if (*num % 2 == 0) {
        printf("%d is even.\n", *num);
    } else {
        printf("%d is odd.\n", *num);
    }
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    check_even_odd(&number);

    return 0;
}
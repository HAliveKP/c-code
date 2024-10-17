#include <stdio.h>

void swap_by_reference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;

    printf("Before swap: x = %d, y = %d\n", x, y);

    swap_by_reference(&x, &y);

    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}
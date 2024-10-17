#include <stdio.h>

void swap_by_value(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void main() {
    int x = 5;
    int y = 10;

    printf("Before swap: x = %d, y = %d\n", x, y);

    swap_by_value(x, y);

    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}
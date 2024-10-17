#include <stdio.h>

void sort_array(int *arr) {
    int i, j, temp;

    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            if (*(arr + i) > *(arr + j)) {
                temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            } 
        }
    }
}

void main() {
    int arr[10];
    int *ptr;

    ptr = arr;

    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", ptr + i); 
    }

    printf("Before sorting:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    sort_array(ptr);

    printf("After sorting:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    return 0;
}

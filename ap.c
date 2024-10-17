#include <stdio.h>

void main()
 {
    int arr[10];


    printf("Enter 10 elements:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", arr + i); 
    }

    int max = *(arr); 
    int min = *(arr); 

    for (int i = 1; i < 10; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
        if (*(arr + i) < min) {
            min = *(arr + i);
        }
    }

    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);

    return 0;
}
#include <stdio.h>

void calculate_sum_average(int *n) {
    int sum = 0;
    for (int i = 1; i <= *n; i++) {
        sum += i;
    }
    float average = (float)sum / *n;

    printf("Sum of %d natural numbers: %d\n", *n, sum);
    printf("Average of %d natural numbers: %.2f\n", *n, average);
}

void main() {
    int num;

    printf("Enter the number of natural numbers: ");
    scanf("%d", &num);

    calculate_sum_average(&num);

   
}
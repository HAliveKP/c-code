#include <stdio.h>

void calculate(int *a, int *b) {
    int sum = *a + *b;
    int difference = *a - *b;
    int product = *a * *b;
    float quotient = (float)*a / *b; 

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %.2f\n", quotient);
}

void main() {
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    calculate(&num1, &num2);

    return 0;
}
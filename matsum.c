#include<stdio.h>

void mat(int a[][2], int b[][2]);

void main()
{
    int a[2][2], b[2][2], i, j;
    printf("Enter the elements of the matrix A:\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("Enter [%d][%d] elements: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements of the matrix B:\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("Enter [%d][%d] elements: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    mat(a, b);
}

void mat(int a[][2], int b[][2])
{
    int sum[2][2], i, j;
    printf("Matrix A elements:\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B elements:\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("\nSUM OF TWO MATRICES:\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d\t", sum[i][j]);  
        }
        printf("\n");
    }
}

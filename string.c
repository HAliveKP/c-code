#include<string.h>
#include<stdio.h>

void sort_strings(char str[][100], int n)
 {
    int i, j;
    char temp[100];

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(str[j], str[j + 1]) > 0)
             {
                strcpy(temp, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], temp);
            }
        }
    }
}

void print_strings(char str[][100], int n) 
{
    int i;
    for (i = 0; i < n; i++) {
        printf("%s\n", str[i]);
    }
}

void main()
 {
    int n, i;
    printf("Enter the number of strings: ");
    scanf("%d", &n);

    char str[n][100];
    for (i = 0; i < n; i++) {
        printf("Enter string %d: ", i + 1);
        scanf("%s", str[i]);
    }

    printf("Before sorting:\n");
    print_strings(str, n);

    sort_strings(str, n);

    printf("After sorting:\n");
    print_strings(str, n);

    return 0;
}
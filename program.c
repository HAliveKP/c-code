#include<stdio.h>
int prime (int);
void main()
{
    int c, num;
    printf("Enter the integer:");
    scanf("%d",&num);
    c=prime (num);
    if(c==1)
        printf("The number is prime");
    else
        printf("The number is composite");
}
int prime (int num)
{
    int i,c=0;
    for(i=2;i<=num;i++)
    {
        if(num%i==0)
        {
            break;
        }
    }
    if(i==num)
        return (1);
    else
        return (0);    
}

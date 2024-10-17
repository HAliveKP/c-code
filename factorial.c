#include<stdio.h>
int fact (int);
void main()
{
    int n,out;
    printf("Enter any number:");
    scanf("%d",&n);
    out=fact(n);
    printf("Factorial of %d=%d",n,out);

}
int fact(int n)
{
    if(n<=1)
        return(1);
    else
        return(n*fact(n-1));    
}
# include <stdio.h>
int check (int);
void main()
{
    int num,h;
    printf("Enter the number:");
    scanf("%d",&num);
    h=check (num);
    if(h==1)
        printf("%d is the even",num);
    else
        printf("%d is the odd",num);
}

int check (int num)
{
    if(num%2==0)
        return(1);
    else
        return(0);    
}
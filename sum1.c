#include<stdio.h>
int sum(int,int);
void main()
{
	int a,b,sum1;
	printf("Enter the value:");
	scanf("%d%d",&a,&b);
	sum1=sum(a,b);
	printf("The total sum is %d",sum1);
	
}
int sum(int a,int b)
{
	int sum;
	sum=a+b;
	return(sum);
}

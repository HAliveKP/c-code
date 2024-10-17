//5.	WAP to find sum of series 1, 2, 3,…..200 using function
#include<stdio.h>
int sum(int);
void main()
{
	int sum1,num;
	sum1=sum(num);
	printf("The total sum is %d",sum1);
}
int sum(int num)
{
	int i,a=0;
	for(i=0;i<=200;i++)
	{
	a=a+i;
	}
	return(a);
}


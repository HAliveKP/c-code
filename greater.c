#include<stdio.h>
int great(int , int , int );
void main()
{
	int a,b,c,ch;
	printf("Enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	ch=great(a,b,c);
	if(ch==2)
	printf("%d is greater",a);
	else if(ch==1)
	printf("%d is greater",b);
	else
	printf("%d is greater",c);
}
int great(int a, int b, int c)
{
	if(a>b&&a>c)
	return 2;
	else if(b>a&&b>c)
	return 1;
	else 
	return 0;
}


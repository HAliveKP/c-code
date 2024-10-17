#include<stdio.h>
int arrsum(int x[]);
void main()
{
    int arr[5],i,res;
    printf("Enter the no of data:");
    for(i=0;i<5;i++)
	{
        scanf("%d",&arr[i]);
    }
    res=arrsum(arr);
    printf("the sum is:%d",res);
   
}
int arrsum(int a[])
{
	int i,sum=0;
	for(i=0;i<5;i++){
		sum=sum+a[i];
	}
	return (sum);
}

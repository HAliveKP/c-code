#include<stdio.h>
void main()
  {
 	FILE *fp;
	int i,n,sum=0,avg=0;
	fp=fopen("file.txt","w");
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		putw(i,fp);
	}
	fclose(fp);
	printf("Press enter to view numbers :");
	printf("\n Output data\n ");
	fp=fopen("file.txt","r");
	while((i=getw(fp))!=EOF){
		sum=sum+i;
		printf(" %d\n ",i);
	}
	avg=sum/n;
	fclose(fp);
	printf("\n Average = %d ",avg);
}
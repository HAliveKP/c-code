#include<stdio.h>
void main()
  {
  	char name[30],add[30];
  	FILE *fp;
  	fp=fopen("student.txt","w");
  	printf("Enter name and address : ");
  	scanf("%s%s",name,add);
  	fprintf(fp,"%s\t %s",name,add);
  	fclose(fp);
  	fp=fopen("student.txt","r");
  	fscanf(fp,"%s\t %s",name,add);
  	printf("\n  -----Ouput data -----\n ");
  	printf("%s \t %s",name,add);
  	fclose(fp);
}
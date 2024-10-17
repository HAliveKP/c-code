#include<stdio.h>
main()
  {
 	FILE *fp;
	char ch;
	printf("\n Input data (to exit press ctrl+z)=");
	fp=fopen("f.txt","w");
	while((ch=getchar())!=EOF){
	putc(ch,fp);
	}
	
	fclose(fp);
	printf("\n Output data\n ");
	fp=fopen("f.txt","r");
	while((ch=getc(fp))!=EOF){
			putchar(ch);
	}

	fclose(fp);
}
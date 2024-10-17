#include<stdio.h>
main ()
{
   char name [30];
   int age, length;
   FILE *fp;
   fp = fopen ("trinity.txt","w");
   printf("Enter your name: \n");
   scanf("%s",name);
   printf("Enter your age: \n");
   scanf("%d",&age);
   fprintf (fp, "%s %d", name,age);
   length = ftell(fp); 
   rewind (fp); 
   fscanf (fp, "%s", name);
   fscanf (fp, "%d", &age);
   fclose (fp);
   printf ("Name= %s \n Age= %d \n",name,age);
   printf ("Total number of characters in file is %d \n", length);
}
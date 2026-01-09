#include<stdio.h>

int main()
{

    //Reading a file using fscanf()
   FILE *file ;

   file = fopen("test.txt","r") ;
   char ch[30] ;
   char ch2[30] ;
   int a[30] ;

   if(file==NULL)
   {
    printf("The file dosent exist") ;
   }

   else
   {
       printf("the file is open: ") ;

       while (!feof(file))
       {
         fscanf(file," %s %s %d", ch, ch2, &a[0]) ; //file pointer ,formate specifier ,string arraya adress

         printf("%s %s %d", ch, ch2, a[0]) ;
       }
       
       fclose(file) ;
   }

   return 0 ;
}
#include<stdio.h>

int main()
{
   FILE *file ;

   file = fopen("test.txt","r") ;
   char ch[30] ;

   if(file==NULL)
   {
    printf("The file dosent exist") ;
   }

   else
   {
       printf("the file is open:") ;

       while (!feof(file))
       {
         fgets(ch,35,file) ;  //reads from file
         printf(" %s\n",ch) ;
       }
       
       fclose(file) ;
   }

   return 0 ;
}
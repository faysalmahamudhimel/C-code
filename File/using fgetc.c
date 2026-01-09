#include<stdio.h>
#include<string.h>

int main()
{
    FILE *file ;
   char ch ;
    file = fopen("test.txt","r") ;

    if(file==NULL)
    {
        printf("The file dosen't exist") ;
    }

    else
    {
        printf("The file is open : ") ;
        
        while(!feof(file))  //feof end of the file 
        {
             ch = fgetc(file) ; //input single char
            printf("%c",ch) ;
        }
        fclose(file) ;
    }
}
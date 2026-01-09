#include<stdio.h>
#include<string.h>

//creating file 
int main()
{
    FILE *file ;
   //w for writing mood

   char name[20] = "FAYSAL HIMEL" ;
   int i ;

   int length = strlen(name) ;
   
    file = fopen("test.txt","w") ;  //first file name second file mood
    
    if(file == NULL)
    {
        printf("File dosen't exist") ;
    }

    else
    {
        printf("File is opended") ;

        for (i=0; i<length; i++)
        {
            fputc(name[i],file) ; //fputc for write inside file
        }

        fclose(file) ;
    }

    return 0 ;
   
}   
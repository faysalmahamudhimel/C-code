#include<stdio.h>

//creating file 
int main()
{
    FILE *file ;
   //w for writing mood
   
    file = fopen("test.txt","w") ;  //first file name second file mood
    
    if(file == NULL)
    {
        printf("File dosen't exist") ;
    }

    else
    {
        printf("File is opended") ;
        fclose(file) ;
    }

    return 0 ;
   
}   
#include<stdio.h>
#include<string.h>

int main()
{
    FILE *file ;
    char name[20] ;

    file = fopen("test.txt","w") ;

    if(file==NULL)
    {
        printf("The file dosen't exist") ;
    }

    else
    {
        printf("The file is open") ;
        printf("Enter the name: ") ;
        
        fgets(name, sizeof(name), stdin) ;

        fputs(name, file) ; /*first string an second file pointer pass
                            to write user input string */

        fclose(file) ;

    }
}
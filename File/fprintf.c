#include<stdio.h>
#include<string.h>

int main()
{
    FILE *file ;
    char name[20] ;
    int age ;

    file = fopen("test.txt","a") ;

    if(file==NULL)
    {
        printf("The file dosen't exist") ;
    }

    else
    {
        printf("The file is open") ;
        printf("Enter the name: ") ;
        fgets(name, sizeof(name), stdin) ;
        
        printf("Enter age: ");
        scanf("%d",&age) ;
        
        fprintf(file,"Name: %s, Age: %d",name,age) ; //firt file name and other same as printf

        fclose(file) ;

    }


    return 0 ;

}
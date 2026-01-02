#include<stdio.h>

//Passing String to function

void display(char x[])
{
    int i ;
    for(i=0; x[i] !='\0' ; i++ ) //printing string charater 
    {
        printf("%c",x[i]);
    }

}
int main()
{
    char name[] ="HIMEL BOSS" ;
    
    display(name) ;

    return 0 ;

}
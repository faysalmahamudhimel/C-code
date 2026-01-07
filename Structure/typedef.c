#include<stdio.h>

int main()
{

    //typedef e user define data type 
    
    typedef char himel[10] ;

    himel ch ;

    ch[0] = 'A' ;
    himel ch2 = "HIMEL"  ;

    printf("PRINTF : %s\n",ch) ;
    printf("PRINTF : %s",ch2) ;

    return 0 ;
}
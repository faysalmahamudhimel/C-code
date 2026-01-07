#include<stdio.h>

struct book 
{
    char name[10] ;
    int price ;
 };

 int main()
 {
    typedef struct book makima ;

    makima a ={"MAKIMA",500} ;

    printf("NAME: %s\n",a.name) ;
    printf("PRICE: %d\n",a.price) ;

    return 0 ;

 }
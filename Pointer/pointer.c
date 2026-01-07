#include<stdio.h>
//pointer 

int main()
{

    int x = 5 ;

    int *p ;

    p = &x ;

    printf("THE VALUE : %d\n",*p) ;
    printf("THE ADRESS: %d",p) ;
   return 0 ;

}
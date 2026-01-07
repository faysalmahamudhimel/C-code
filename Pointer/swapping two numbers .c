#include<stdio.h>

int main()
{
    int x = 10, y = 20 ;
    
    int *p1 , *p2 , temp ;

    p1 = &x ;
    p2 = &y ;

    temp = *p1 ;
    *p1 = *p2 ;
    *p2 = temp ;

    printf("X: %d\n",x) ;
    printf("Y: %d",y) ;

    return 0 ;

}
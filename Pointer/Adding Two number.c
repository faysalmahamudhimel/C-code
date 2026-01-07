#include<stdio.h>

int main()
{
    int x , y;

    printf("ENTER THE VALUE OF X AND Y : ") ;
    scanf("%d %d",&x,&y) ;

    int *p1 , *p2 ;

    p1 = &x ;
    p2 = &y ;

    int sum = *p1 + *p2 ;

    printf("THE SUM: %d",sum) ;
    
    return 0 ;
}
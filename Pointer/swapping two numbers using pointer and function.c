#include<stdio.h>

void swapping(int *p1,int *p2) // creat swapping function using pointer 
{
    int temp ;

    temp = *p1 ;
    *p1 = *p2 ;
    *p2 = temp ;

}

int main()
{
    int x =20 , y = 40 ;

    printf("\n-----Before Swapping-----\n") ;

    printf("X = %d Y = %d",x,y) ;

    swapping(&x , &y) ;  //swapping function

    printf("\n-----After Swapping-----\n") ;

    printf("X = %d Y = %d",x,y) ;
    return 0 ;

}
#include<stdio.h>

//creat union

union test 
{
    int x , y ;
    
};

int main()
{
 
    union test t1 ;

    t1.x = 10 ;
    printf("The value of x: %d\n",t1.x) ;
    printf("The value of y: %d\n",t1.y) ;

    t1.y = 20 ;
    printf("\nThe value of x: %d\n",t1.x) ;
    printf("The value of y: %d\n",t1.y) ;

    return 0 ;
    

     
}
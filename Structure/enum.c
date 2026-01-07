#include<stdio.h>

 enum days_of_week     //a enumeration is a variable like structure
 {
    sat , sun, mon, tues, wed , thu , fri 

 };

int main()
{

    enum days_of_week d1 , d2 ;
 
    d1 = sun ;
    d2 = thu ;

    int dif = d2 -d1;

    printf("Difference Position: %d",dif) ;

    return 0 ;

    
}
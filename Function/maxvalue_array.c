//finding maximum value from an array using function
#include<stdio.h>

int maxval(int x[])
{
    //finding maximum value 
    int i, max = x[0] ;

    for(i=1; i<5; i++)
    {
        if(max < x[i])
        {
            max = x[i] ;
        }
    }

    return max ;
} 

int main()
{
    int max[] = {10 ,20,40,60,30} ;

    int maxvalu = maxval(max) ;

    printf("THE MAX VALUE IS : %d",maxvalu);

    return 0 ;

}
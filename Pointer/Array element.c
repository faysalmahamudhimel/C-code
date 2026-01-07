#include<stdio.h>

int main()
{
    int a[4] = {10, 20, 30 ,40} ;

    int *p , i ;

    p = &a[0] ; //adress 0 ndex array

    printf("The VAlu of ARRAY: ") ;

    for(i=0; i<4; i++)
    {
        printf("%d ",*p) ;
        p++ ; //to adress another array value
    }

    return 0 ;
}
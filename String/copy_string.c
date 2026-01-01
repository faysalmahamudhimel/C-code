#include<stdio.h>
#include<string.h>

int main()
{
    //copy string using strcpy()

    char A[] = "FAYSAL" ;
    char B[10] ;

    strcpy( B , A) ;    /* first jar moddhe rakhbo
                         second jar man rakhbo*/
     
    printf("String A = %s\n",A);
    printf("String B = %s\n",B);

    return 0;

}
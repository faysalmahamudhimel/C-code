#include<stdio.h>

int M (int a)
{
    return a*a ;
}

int main()
{
    int num, result;
    printf("Enter A positive Number : ");
    scanf("%d",&num) ;

    result = M(num) ;

    printf("The Scqure of the given Number is  : %d",result);

    return 0 ;
}

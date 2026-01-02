//Factorial Using Recursion

#include<stdio.h>

int fact(int n)  //find factorial using recursion
{
    if(n==0)
    {
        return 1 ;    
    }

    else
    {
        return n * fact (n-1) ;
    }
          
}

int main()
{
    int n ;
    printf(" Input The valu of Factorial: ");
    scanf("%d",&n);

   int factval = fact(n) ;

   printf("The Factorial of %d IS = %d",n,factval) ;

   return 0;


}
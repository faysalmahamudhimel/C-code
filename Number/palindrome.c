#include<stdio.h>

int main()
{
    int x ;
     scanf("%d",&x);
     
     int steps ;
     
     if(x%5==0)
     {
        steps = x/5 ;    
     }
     else
     {
         steps = (x/5) + 1 ;
     }
     
     printf("%d\n",steps) ;
     
     return 0 ;
}
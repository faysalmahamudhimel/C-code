#include<stdio.h>

int main()
{
    int i,fact,n;
    fact=1;
    printf("enter the positive number : ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        fact=fact*i;

    }
    printf("Result: %d",fact);
    return 0;
}
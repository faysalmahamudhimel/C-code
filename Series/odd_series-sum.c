#include<stdio.h>

int main()
{
    int i,n,sum=0;
    printf("Enther the number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i+=2)
    {
       sum= sum + i;
         
    }
    printf("Sum : %d",sum);
}
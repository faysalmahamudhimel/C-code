#include<stdio.h>

int main()
{
    int i,n,odd=0,even=0;
    printf("Enter a positive number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            even=even+i;
        }
        else
        {
            odd=odd+i;
        }
    }
    printf("The total value:%d",odd-even);
    return 0;
}
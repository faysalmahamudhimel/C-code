#include<stdio.h>

int main()
{
    int first=0 , second=1 , fibonacci , count ,n;
    
    printf("Enter the Fibonacci range: ");
    scanf("%d",&n);

    for(count =0 ; count < n ; count++)
    {
        if(count<=1)
        {
            fibonacci = count;
        }
        else
        {
            fibonacci = first + second;
            first = second ;
            second = fibonacci ;
        }

        printf("%d ",fibonacci);
    }

    return 0;
}
    
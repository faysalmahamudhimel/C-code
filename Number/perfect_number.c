#include<stdio.h>

int main()
{
    int number ,sum=0, i;
    printf("Enter a Number: ");
    scanf("%d",&number);

    for(i=1; i<=number/2 ; i++)
    {
        if(number % i == 0)
        {
            sum += i;
        }
    }
//6
    if(sum == number)
    {
        printf("%d is a perfect Number",number);
    }

    else
    {
         printf("%d is not a perfect Number",number);
    }
    return 0;
}
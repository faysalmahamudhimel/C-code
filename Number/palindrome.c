#include<stdio.h>

int main ()
{
    /*Number is palindrome or not */

    int temp,number,sum=0,remainder;
    printf("Enter Number: ");
    scanf("%d",&number);

    temp=number;
    while(temp!=0)
    {
        remainder=temp%10;
        sum=sum*10+remainder;
        temp= temp / 10;
    }
    if(number == sum)
    {
        printf("Palindrome Number");
    }
    else
    {
        printf("Not a Palindrome Number");
    }
    return 0;
}
#include<stdio.h>

int main()
{
    /* important for exam*/

    int temp,number,sum=0,remainder;

    printf("Enter Number: ");
    scanf("%d",&number);

    temp=number;

    while(temp!=0)
    {
        remainder=temp%10;
        sum+=remainder;
        temp= temp / 10;
    }
    printf("Sum of Digit : %d",sum);
}
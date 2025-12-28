/* Factorial er multiple hobe exactly same number*/

#include<stdio.h>


int main()
{
    int sum=0, temp, fact, num, i, remainder;

    printf("Enter a positive integer: ");
    scanf("%d",&num);

    temp=num;
    while(temp!=0)
    {
        remainder = temp % 10;

        fact = 1;

        for(i=1;i<=remainder;i++)
        {
            fact = fact * i;
        } 

        sum = sum + fact;
        temp = temp/10 ;
    }

    if(sum == num)
    {
        printf(" Strong Number ");
    }
    else
    {
        printf("Not a strong Number");
    }

}
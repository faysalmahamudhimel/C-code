#include<stdio.h>
#include<math.h>
int main()
{
    int temp,number,sum=0,remainder;

    printf("Enter a positive Number: ");       //153
    scanf("%d", &number);

    temp = number;

    while(temp !=0)
    {
        remainder = temp % 10;
        sum += remainder * remainder * remainder;
        temp = temp / 10;
    }

    if(number == sum)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not an Armstrong Number");
    }
    return 0;
}
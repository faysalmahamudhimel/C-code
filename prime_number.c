#include<stdio.h>
#include<math.h>

int main()
{
    int num,i,count=0;
    printf("Enter the positive Number: ");
    scanf("%d",&num);

    if(num<=1)
    {
        count=1;
    }
    for(i=2;i<sqrt(num);i++)
    {
        if(num%i==0)
        {
            count=1;
            break;
        }
    }
    
    if(count==0)
    {
        printf("The number %d is a prime Number",num);

    }
    else{
         printf("The Number %d is not a Prime number",num);
    }
    return 0;
}
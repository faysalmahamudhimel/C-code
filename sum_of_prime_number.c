#include<stdio.h>

int main()
{
    int num, i, count, Totalprime=0,sum=0;
                                             
    for(num = 1; num <= 100; num++)
    {
        count = 0;

        if(num <= 1)
        {
            count = 1;
        }
        else
        {
            for(i = 2; i*i <= num; i++)
            {
                if(num % i == 0)
                {
                    count = 1;
                    break;
                }
            }
        }

        if(count == 0)
        {
            printf("%d\n", num);
            Totalprime++;
            sum=sum+num;
        }
    }
    printf("Total Prime Number: %d\n",Totalprime);
    printf("sum of Prime Numbers: %d",sum);


    return 0;
}

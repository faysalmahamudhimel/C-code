//sum of array
//average
#include<stdio.h>

int main()
{
    int num[5]={20,30,40,50,80};
    
    int i,sum=0;
    for(i=0; i<=4 ; i++)
    {
       sum = sum + num[i]; 
    }
   printf("The sum is: %d\n",sum);
   int avg;
   avg = sum/5;
   printf("THe average is: %d\n",avg);
   return 0;
}
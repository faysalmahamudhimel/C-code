#include<stdio.h>

int main()
{
    /*find minimum number using array*/

    int num[10],n,min,i;
    printf("Enter a positive number 1 to 10 : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);

    }

    min = num[0];
    for(i=1;i<n;i++)
    {
        if(min > num[i])
        min = num[i];
    }
    printf("Minimum Number:%d",min);

    return 0;


}
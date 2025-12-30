#include<stdio.h>

int main()
{
    /*find maximum number using array*/

    int num[10],n,max,i;
    printf("Enter a positive number 1 to 10 : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);

    }

    max = num[0];
    for(i=1;i<n;i++)
    {
        if(max < num[i])
        max = num[i];
    }
    printf("Maximum Number:%d",max);

    return 0;


}
#include<stdio.h>

int main()
{
    /* take input from user and sum of them by using array */

    int i, n,sum=0,a[11];

    printf("Enter a positive number 1 to 10 : ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);  
    }

    for(i = 0; i <=n-1; i++)
    {
        sum = sum + a[i];
    }
    printf("The sum : %d",sum);

    return 0;
}

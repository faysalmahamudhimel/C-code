// 1^2+2^2+.......+n^2

#include<stdio.h>

int main()
{
    int i,n,sum=0;

    printf("Enter Number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum= sum + i*i;

    }
    printf("The Of Scqure is : %d",sum);
    return 0;

}
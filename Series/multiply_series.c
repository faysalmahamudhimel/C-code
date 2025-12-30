#include<stdio.h>

int main()
{
    /* 1x2x3x4.......xn*/

    int i,n,result=1;
    printf("Enter a  positive number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
       result=result*i;
    }
    printf("THe multiply of  %d is:%d ",n,result);
    return 0;
}
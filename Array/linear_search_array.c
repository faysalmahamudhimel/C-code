#include<stdio.h>

int main()
{
    
    int num[]= {12,13,16,17,18};
    int value, i;

    printf("Enter the value you want to search: ");
    scanf("%d",&value);

    int pos = -1;
    for(i=0; i<5; i++)
    {
        if(value==num[i])
        {
            pos = i + 1;
            break;
        }

    }

    if(pos== -1)
    {
        printf("The item is not found");
    }

    else
    {
       printf("The %d is Found at %d position",value,pos);
    }

    return 0;



}
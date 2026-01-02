#include<stdio.h>

//printing function

void display(int A[])
{
    int i ;
    printf("The Number : ");

    for( i=0; i<5; i++)
    {
        printf("%d ",A[i]);

    }
}

int main()
{
    int num[] = {10,20,30,40,50} ;

    display(num) ;
    return 0;


}
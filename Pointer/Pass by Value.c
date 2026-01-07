#include<stdio.h>

//creat function 

void modify(int num)
{
    num = 20 ;
}                         
                     //pass by value
                     //value not change 

int main()
{
    int num =10 ;

    modify(num) ;

    printf("The value of num: %d",num) ;

    return 0 ;

}
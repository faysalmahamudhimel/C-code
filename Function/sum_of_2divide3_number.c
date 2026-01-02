#include<stdio.h>
//data type function_name (argument)

int sum (int a,int b)
{
    return a+b;
} 
int main()
{
    int num1, num2;

    printf("Enter two Numbers: ");
    scanf("%d %d",&num1,&num2);

    int result = sum(num1,num2); //argument of sum

    printf("The Sum is = %d ",result); 

    return 0 ;

}


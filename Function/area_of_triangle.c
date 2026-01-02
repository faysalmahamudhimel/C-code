#include<stdio.h>

float area (float b, float h)
{
    return 0.5* b * h ;
}

int main()
{
    float base , height ;


    printf("Enter Base and Height = ");
    scanf("%f %f",&base,&height);

    printf("The Are of a Triangle : %.2f ",area(base , height));

    return 0 ;


    

}
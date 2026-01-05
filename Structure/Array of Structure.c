#include<stdio.h>

//creat structure 
struct person
{
    int age ;
    float salary ;
};

int main()
{

   struct person person[4] ;

   int i ;
   
     for(i=0 ; i<4 ; i++)
     {
        printf("enter information of person %d\n",i+1);
        printf("Enter Age: ");
        scanf("%d",&person[i].age) ;
        printf("Enter salary: ");
        scanf("%f",&person[i].salary) ;



     } 

     for(i=0; i<4; i++)
     {
        printf("information of person %d\n",i+1);
        printf("AGE : %d\n",person[i].age);
        printf("SALARY: %.1f\n",person[i].salary);



     }
     
     return 0; 
}
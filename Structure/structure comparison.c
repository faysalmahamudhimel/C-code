#include<stdio.h>

//creat strcture 

struct person
{
       int age ;
       float salary ;
};


int main()
{
    struct person person1 = {27,2333.34} ;
    struct person person2 ;

    //element wise assignment 
    person2.age = 25 ;
    person2.salary = 2345.3 ;

    //struct wise assignment 
   
    
    if(person2.age == person1.age && person2.salary == person1.salary)
    printf("person2 is eual person1");

    else
    printf("person1 is not eqal person2");

    return 0 ;
    
}
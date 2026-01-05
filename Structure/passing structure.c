#include<stdio.h>
#include<string.h>

//creat structure 
struct person 
{
    char name[50] ;
    int age ;
    float salary ;
};

//creat display function
//to recive structure use struct
void display(struct person p) //p is a veriable
{
    printf("\nNAME: %s\n",p.name) ;
    printf("AGE: %d\n",p.age) ;
    printf("SALARY: %.1f\n",p.salary) ;


}

int main()
{
    struct person person1 ,person2 ;

    strcpy(person1.name,"HIMEL BOSS") ;
    person1.age = 23 ;
    person1.salary = 3233.00 ;

    display(person1) ;   //function call

    strcpy(person2.name,"ABISUL ISLAM") ;
    person2.age = 27 ;
    person2.salary = 32339.00 ;

    display(person2) ; 

    return 0 ;

}
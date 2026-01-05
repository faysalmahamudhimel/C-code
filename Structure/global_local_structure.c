#include<stdio.h>


 
 int main()
 {
 //local structure 
    struct person 
 {
    int age ;

    float salary ;
 };

    struct person man1, man2 ; //local variable

    man1.age = 23 ;                // use . to useing person structure
    man1.salary = 27000.00 ;

    printf("man One age:%d\n",man1.age);
    printf("man One salary:%.1f\n",man1.salary);

    man2.age = 25 ;
    man2.salary = 34000 ;

    printf("\n");
    printf("man two age:%d\n",man2.age);
    printf("man two salary:%.1f\n",man2.salary);
    

    return 0 ;  

 }
 
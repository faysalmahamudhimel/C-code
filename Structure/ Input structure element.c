#include<stdio.h>

//creat global structure 
 struct person 
 {
    int age ;

    float salary ;
 };

 int main()
 {
    struct person man1, man2 ;

   printf("Enter man one age: ");
   scanf("%d",&man1.age) ;

   printf("Enter man two age: ");
   scanf("%d",&man2.age) ;

   printf("Enter man one salary: ");
   scanf("%f",&man1.salary) ;

   printf("Enter man two salary: ");
   scanf("%f",&man2.salary) ;


    printf("man One age:%d\n",man1.age);
    printf("man One salary:%.1f\n",man1.salary);


printf("\n");
    printf("man two age:%d\n",man2.age);
    printf("man two salary:%.1f\n",man2.salary);
    

    return 0 ;

 }
 
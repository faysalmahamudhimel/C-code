#include<stdio.h>

//use multiple unions to compare union and structure

union test 
{
    int x ,y ;
};

union test2 
{
   char a ;
   int c ;
};

union test3
{
    char name[20] ;
    double d ;
};

struct test4
{
    int TA ;
    char mc ;
    float bc ;
};

int main()
{
    //initialize union
    union test t1 ;
    union test2 t2 ;
    union test3 t3 ;
    struct test4 t4 ;

    printf("Sizeof(t1): %zu\n",sizeof(t1)) ;
    printf("Sizeof(t2): %zu\n",sizeof(t2)) ;
    printf("Sizeof(t3): %zu\n",sizeof(t3)) ;
    printf("Sizeof(t4): %zu\n",sizeof(t4)) ;

    return 0 ;
    
}
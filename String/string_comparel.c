#include<stdio.h>
#include<string.h>
//string compare 
int main()
{
    char Str1[] ="FAYSAL MAHAMUD" ;
    char str2[] = "FAYSAL" ;

    int c = strcmp(Str1,str2) ;

    if( c==0 )
    {
        printf("The String is Equal");
    }

    else
    {
        printf("The string is not equal");
    }

    return 0;
}
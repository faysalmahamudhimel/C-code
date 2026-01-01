#include<stdio.h>
#include<string.h>

int main()
{
    char strA [20] ="MY NAME IS " ;
    char strB [] ="HIMEL" ;

    strcat(strA , strB);

    printf("%s\n",strA);
    printf("%s\n",strB);

    return 0;

}
#include<string.h>
#include<stdio.h>

int main()
{
    char str1[20] = "BANGLADESH" ;
    char str2[20] = "PAKISTHAN" ;
    char temp[20] ;
    
    printf("\nBefore swapping\n");

    printf("String1 = %s\n",str1);
    printf("String2 = %s",str2);

    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);

    printf("\nAfter swapping\n");
    
    printf("String1 = %s\n",str1);
    printf("String2 = %s",str2);

    return 0;

}
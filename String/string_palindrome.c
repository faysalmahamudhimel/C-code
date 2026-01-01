#include<stdio.h>
#include<string.h>

int main()
{
    char name1[] = "MADAM" ;
    char name2[] = "MADAM" ;
    
    strrev(name2) ;  //string reverse

    int r = strcmp(name1,name2) ;  //string compare
    
  if(r==0)  //check palindrome or not 
  {
    printf("ThE String is Palindrome");
  }

  else
  {
    printf("The String is Not Palindrome");
  }

  return 0;
  


}

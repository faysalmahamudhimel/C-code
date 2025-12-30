#include <stdio.h>
#include <string.h>

int main()                      /* Palindrome String */
{
    char str[100], rev[100];
    
    printf("Enter a word: ");
    scanf("%s", str);

    strcpy(rev, str);   // copy string
    strrev(rev);        // reverse string

    if(strcmp(str, rev) == 0)
        printf("Palindrome String");
    else
        printf("Not a Palindrome String");

    return 0;
}

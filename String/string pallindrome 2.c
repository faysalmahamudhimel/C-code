#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];

    printf("Enter a string: ");
    scanf("%s", str);  // simple input, space char will break though

    strcpy(rev, str);   // মূল string copy করা
    strrev(rev);        // reverse করা

    if(strcmp(str, rev) == 0)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}


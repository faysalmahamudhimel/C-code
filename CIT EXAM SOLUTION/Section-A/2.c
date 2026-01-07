/*Write a program to compare two strings without using any string function.*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    if (strcmp(str1, str2) == 0)
        printf("Strings are equal");
    else
        printf("Strings are not equal");

    return 0;
}

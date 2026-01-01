#include<stdio.h>

int main()
{
    // concatenation without strcat()
    char A[50] = "MY NAME IS ";
    char B[] = "HIMEL";

    int i = 0, j = 0, len = 0;

    // find length of string A
    while (A[i] != '\0')
    {
        i++;
        len++;
    }

    // add string B to A
    while (B[j] != '\0')
    {
        A[len + j] = B[j];
        j++;
    }

    // add null character at end
    A[len + j] = '\0';

    printf("%s\n", A);

    return 0;
}

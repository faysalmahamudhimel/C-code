#include <stdio.h>

int main()
{
    int n, i, j;
    char ch;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    printf("Enter a character: ");
    scanf(" %c", &ch);   // space important

    // Upper part
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
            printf(" ");

        for (j = 1; j <= 2 * i - 1; j++)
            printf("%c", ch);

        printf("\n");
    }

    // Lower part
    for (i = n - 1; i >= 1; i--)
    {
        for (j = 1; j <= n - i; j++)
            printf(" ");

        for (j = 1; j <= 2 * i - 1; j++)
            printf("%c", ch);

        printf("\n");
    }

    return 0;
}

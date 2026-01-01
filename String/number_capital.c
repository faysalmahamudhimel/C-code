//Number of capital-small letters, digits
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, capital = 0, small = 0, digit = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            capital++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            small++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digit++;
        }
    }

    printf("Number of capital letters: %d\n", capital);
    printf("Number of small letters: %d\n", small);
    printf("Number of digits: %d\n", digit);

    return 0;
}
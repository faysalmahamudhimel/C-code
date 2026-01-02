#include <stdio.h>

// user defined power function
int power(int base, int exp)
{
    int i, result = 1;

    for(i = 1; i <= exp; i++)
    {
        result = result * base;
    }

    return result;
}

int main()
{
    int base, exp, result;

    printf("Enter base and power: ");
    scanf("%d %d", &base, &exp);

    result = power(base, exp);

    printf("Result = %d", result);

    return 0;
}

#include <stdio.h>
#include <math.h>

int main()
{
    int base, power;
    int result;

    printf("Enter base and power: ");
    scanf("%d %d", &base, &power);

    result = pow(base, power);

    printf("Result = %d", result);

    return 0;
}

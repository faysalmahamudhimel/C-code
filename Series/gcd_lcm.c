#include<stdio.h>

int main()
{
    int n1, n2, gcd, lcm, num1, num2, remainder;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    num1 = n1;
    num2 = n2;

    while(num2 != 0)
    {
        remainder = num1 % num2;
        num1 = num2;
        num2 = remainder;
    }

    gcd = num1;
    lcm = (n1 * n2) / gcd;

    printf("GCD: %d\n", gcd);
    printf("LCM: %d\n", lcm);

    return 0;
}
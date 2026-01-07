/*Design a simple calculator using switch statement*/

#include <stdio.h>

int main() {
    char op;       // operator (+, -, *, /)
    float a, b;    // operands

    // Input operator
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    // Switch statement to perform calculation
    switch (op) {
        case '+':   // addition
            printf("Result = %.2f", a + b);
            break;

        case '-':   // subtraction
            printf("Result = %.2f", a - b);
            break;

        case '*':   // multiplication
            printf("Result = %.2f", a * b);
            break;

        case '/':   // division
            if (b != 0)
                printf("Result = %.2f", a / b);
            else
                printf("Division by zero not allowed"); // check zero
            break;

        default:    // invalid operator
            printf("Invalid operator");
    }

    return 0;
}

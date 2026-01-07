/*Function returning multiple values using pointers*/
#include <stdio.h>

// Function to calculate sum and product
void sumAndProduct(int a, int b, int *sum, int *product) {
    *sum = a + b;        // store sum at address of sum
    *product = a * b;    // store product at address of product
}

int main() {
    int num1, num2;
    int sum, product;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Call function passing addresses to get multiple values
    sumAndProduct(num1, num2, &sum, &product);

    printf("Sum = %d\n", sum);
    printf("Product = %d", product);

    return 0;
}

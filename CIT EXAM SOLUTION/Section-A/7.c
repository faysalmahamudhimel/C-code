/*Swap values of two variables using pointers*/
#include <stdio.h>

// Function to swap two numbers using pointers
void swap(int *x, int *y) {
    int temp = *x;  // store value of x
    *x = *y;        // assign y to x
    *y = temp;      // assign temp to y
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swap: a = %d, b = %d\n", a, b);

    swap(&a, &b);  // pass addresses to swap

    printf("After swap: a = %d, b = %d", a, b);

    return 0;
}

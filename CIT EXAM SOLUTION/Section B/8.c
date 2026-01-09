//Q8. Write a program to calculate the mean and variance of given data.

#include <stdio.h>

int main() {
    int n, i;
    float data[50], mean = 0, variance = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%f", &data[i]);
        mean += data[i];
    }

    mean = mean / n;

    for(i = 0; i < n; i++) {
        variance += (data[i] - mean) * (data[i] - mean);
    }

    variance = variance / n;

    printf("Mean = %.2f\n", mean);
    printf("Variance = %.2f\n", variance);

    return 0;
}


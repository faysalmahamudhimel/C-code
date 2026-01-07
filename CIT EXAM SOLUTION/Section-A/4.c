/*Pass array to a function and return sum of elements.*/

#include <stdio.h>

// Function to calculate sum of array elements
int arraySum(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];  // add each element
    }
    return sum;  // return total sum
}

int main() {
    int n, sum;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // input elements
    }

    sum = arraySum(arr, n);  // call function

    printf("Sum of array elements = %d", sum);

    return 0;
}

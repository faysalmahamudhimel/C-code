/*Sum of series (array elements) using recursion*/

#include <stdio.h>

// Recursive function to calculate sum of array
int sumArray(int arr[], int n) {
    if (n == 0)       // base case: no elements left
        return 0;
    else
        return arr[n - 1] + sumArray(arr, n - 1);  // last element + sum of rest
}

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = sumArray(arr, n);

    printf("Sum of the series = %d", sum);

    return 0;
}

\\Write a C program to create a new array from a given array of integers shifting all zeros to left direction

#include <stdio.h>

int main() {
    int arr[50], newArr[50];
    int n, i, j = 0, k = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    /* Count zeros */
    for(i = 0; i < n; i++) {
        if(arr[i] == 0)
            j++;
    }

    /* Fill zeros first */
    for(i = 0; i < j; i++) {
        newArr[i] = 0;
    }

    /* Fill non-zero elements */
    for(i = 0; i < n; i++) {
        if(arr[i] != 0) {
            newArr[j + k] = arr[i];
            k++;
        }
    }

    printf("New array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", newArr[i]);
    }

    return 0;
}


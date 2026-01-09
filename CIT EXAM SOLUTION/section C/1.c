//Write a C program to create a new array from a given array of integers shifting all zeros to left direction.
#include <stdio.h>

int main() {
    int a[100], n, i, j = 0, b[100];

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // first store zeros
    for(i = 0; i < n; i++)
        if(a[i] == 0)
            b[j++] = 0;

    // then non-zero elements
    for(i = 0; i < n; i++)
        if(a[i] != 0)
            b[j++] = a[i];

    printf("New array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", b[i]);

    return 0;
}

/* Write a program to store a series in an array, 
separate even and odd numbers into two different arrays, and calculate the sum of even and odd numbers separately.
 This is a comment in C */

/*একটি series (array) ইনপুট নেবে

even ও odd সংখ্যাগুলো আলাদা দুইটি array-তে রাখবে

even সংখ্যাগুলোর sum আলাদা

odd সংখ্যাগুলোর sum আলাদা করে বের করবে*/

 #include <stdio.h>

int main() {
    int n, i;
    int arr[100], even[100], odd[100];
    int eCount = 0, oCount = 0;
    int evenSum = 0, oddSum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0) {
            even[eCount++] = arr[i];
            evenSum += arr[i];
        } else {
            odd[oCount++] = arr[i];
            oddSum += arr[i];
        }
    }

    printf("\nEven numbers: ");
    for (i = 0; i < eCount; i++) {
        printf("%d ", even[i]);
    }
    printf("\nSum of even numbers = %d\n", evenSum);

    printf("\nOdd numbers: ");
    for (i = 0; i < oCount; i++) {
        printf("%d ", odd[i]);
    }
    printf("\nSum of odd numbers = %d\n", oddSum);

    return 0;
}

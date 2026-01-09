//Display Pascal’s Triangle

#include <stdio.h>

int main() {
    int i, j, n, number;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        number = 1;
        for(j = 0; j <= i; j++) {
            printf("%d ", number);
            number = number * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}


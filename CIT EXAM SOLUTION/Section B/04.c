//Write a C program to read integers and then write all odd numbers to a file called ODD and all even numbers to a file called EVEN.

#include <stdio.h>

int main() {
    FILE *fodd, *feven;
    int n, i, num;

    fodd = fopen("ODD.txt", "w");
    feven = fopen("EVEN.txt", "w");

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("Enter the numbers:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &num);

        if(num % 2 == 0)
            fprintf(feven, "%d ", num);
        else
            fprintf(fodd, "%d ", num);
    }

    fclose(fodd);
    fclose(feven);

    printf("Odd and Even numbers written to files successfully.\n");

    return 0;
}


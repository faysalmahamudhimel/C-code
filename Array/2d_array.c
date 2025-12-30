#include<stdio.h>

int main()
{
    int a[3][4] = { {1, 2, 3, 3}, {4, 5, 6, 7}, {8, 9, 10, 11} };
    // Initializing the 2D array
    int i,j;

    // Printing the 2D array

    for(i=0; i<3; i++)  // Loop through rows
    {
        for(j=0; j<4; j++)  // Loop through columns
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;


}
#include<stdio.h>

int main()
{
    int A[3][3];
    int i, j;

    // Input elements into the 2D array

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Enter element A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    return 0;
}
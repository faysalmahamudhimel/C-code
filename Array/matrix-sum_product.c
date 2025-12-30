#include <stdio.h>

int main()
{
    int r1, c1, r2, c2;
    int A[10][10], B[10][10], sum[10][10], product[10][10];
    int i, j, k;

    /* Input size of first matrix */
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    /* Input size of second matrix */
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    /* Input first matrix */
    printf("\nEnter elements of first matrix:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    /* Input second matrix */
    printf("\nEnter elements of second matrix:\n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    /* Matrix Sum */
    if (r1 == r2 && c1 == c2)
    {
        printf("\nSum of matrices:\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                sum[i][j] = A[i][j] + B[i][j];
                printf("%d ", sum[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("\nMatrix addition not possible\n");
    }

    /* Matrix Product */
    if (c1 == r2)
    {
        printf("\nProduct of matrices:\n");

        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                product[i][j] = 0;
                for (k = 0; k < c1; k++)
                {
                    product[i][j] += A[i][k] * B[k][j];
                }
                printf("%d ", product[i][j]);
            }
            printf("\n");  //print new line
            
        }
    }
    else
    {
        printf("\nMatrix multiplication not possible\n");
    }

    return 0;
}

#include<stdio.h>

int main()
{
    int A[10][10], transpose[10][10], i, j, row, col;

    printf("Enter the row and coloum of the matrix: ");
    scanf("%d %d",&row,&col);

    //input matrix

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);

        }

        printf("\n");
    }

    //for transpose matrix

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            transpose[j][i] = A[i][j] ;
        }
    }

    //print A Matrix
    
    printf("\nMatix of A =\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ",A[i][j]);

        }

        printf("\n");
    }

    printf("\nTranspose of Matrix A = \n");
    
     for(i=0; i<col; i++)
    {
        for(j=0; j<row; j++)
        {
            printf("%d ",transpose[i][j]);

        }
        printf("\n");
    }

}
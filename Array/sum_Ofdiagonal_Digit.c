#include<stdio.h>

int main()
{
    int A[5][5], i, j;

    int row, col;

    printf("Enter The row and coloum of Matrix A: ");
    scanf("%d %d",&row,&col);

    //input matrix of A

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
         printf("\n");
    }

    printf("\n");
    printf("\nEnterted Matrix A\n");

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ",A[i][j]);
            
        }

        printf("\n");
    }

    int sum = 0;

    printf("DIOGONAl ELEMENTS = ");

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            if(i == j)
            {
                printf("%d ",A[i][j]);
                sum = sum + A[i][j] ;
            }
            
        }

      
    }

    printf("\nSum of Diagonal Digit of Matrix A = %d\n",sum);

    return 0;



    
    



}
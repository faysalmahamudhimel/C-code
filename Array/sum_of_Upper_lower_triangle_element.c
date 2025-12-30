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

    int uppersum = 0, lowersum=0;

   

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            if(i<j)
            {
               
                uppersum = uppersum + A[i][j] ;
            }

            if(i>j)
            {
               
                lowersum = lowersum + A[i][j] ;
            }
            
        }

      
    }

    printf("\nSum of Upper triangle element= %d\n",uppersum);
    printf("\nSum of lower triangle element= %d\n",lowersum);


    return 0;



    
    



}
#include<stdio.h>

int main()
{
    int A[3][3] , i, j, B[3][3];

    printf("\n Enter the elements of matrix A \n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }

       printf("\n");
    }
    
    printf("A = ");
    

    for(i=0; i<3; i++)
    {
        printf("\t");
        for(j=0; j<3; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    
    printf("\n Enter the elements of matrix B \n");
    printf("\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("B[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);
        }

       printf("\n");
    }
    
    printf("B = ");
    

    for(i=0; i<3; i++)
    {
        printf("\t");
        for(j=0; j<3; j++)
        {
            printf("%d ",B[i][j]); //print
        }
        printf("\n");
    }

    return 0;
}
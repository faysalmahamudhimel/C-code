#include<stdio.h>
/*for 3X3 matrix*/
int main()
{
    int A[3][3] , i, j, B[3][3],C[3][3];

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

     printf("\n");
    
    
    printf("B = ");
    

    for(i=0; i<3; i++)
    {
        printf("\t");
        for(j=0; j<3; j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    


    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

     printf("\n");
    printf("A + B = ");
    
     for(i=0; i<3; i++)
    {
       
        for(j=0; j<3; j++)
        {
           
            printf("%d ",C[i][j]);  //print new series
            
        }
        printf("\n");
         printf("\t");
    }

    return 0;
}
#include<stdio.h>

int main()
    {
       int A[5][5], B[5][5], C[5][5];
       int i, j, k, c1, r1, c2, r2,sum=0;

       printf("Enter rows and columns of first matrix: ");
       scanf("%d %d", &r1, &c1);

         printf("Enter rows and columns of second matrix: ");
         scanf("%d %d", &r2, &c2);

        if(c1 == r2)
        {
            printf("\nEnter elements of First matrix\n");
          //input first matrix

            for(i=0; i<c1; i++)
            {
                for(j=0; j<r1; j++)
                {
                    printf("A[%d][%d] = ",i,j);
                    scanf("%d",&A[i][j]);
                }
                printf("\n");
            }

            //input second matrix

             printf("\nEnter elements of second matrix\n");
            
            for(i=0; i<c2; i++)
            {
                for(j=0; j<r2; j++)
                {
                    printf("B[%d][%d] = ",i,j);
                    scanf("%d",&B[i][j]);
                }
                printf("\n");
            }

            //multiplecation of matrix

            for(i=0; i<r1; i++)
            {
               for(j=0; j<c2; j++)
               {
                 for(k=0; k<c1; k++)
                 {
                    sum = sum + A[i][k] * B[k][j];
                 }

                 C[i][j] = sum ;
                 sum =0;
               }
            }
            //result of matrix

            printf("\nMultiplecation of matrix\n");

            for(i=0; i<r1; i++)
            {
                for(j=0; j<c2; j++)
                {
                
                    printf("%d\t",C[i][j]);  //print result
                    
                }
                printf("\n");
            }



        }

        else
        {
            printf("\nMatrix Multiplecation is Not Posiable\n");
        }
    }

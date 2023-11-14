#include<stdio.h>
int main()
{
    int m,n,i,j,arr[10][10],arr1[10][10],s;
    int op[10][10];int c;
    printf("Enter size of matrix");
    scanf("%d",&m);//m rows
    scanf("%d",&n);//n coloumns
    printf("Enter choice: 1 for addition , 2 for multiplication and 3 for transpose");
    scanf("%d",&c);//menu driven
    switch(c)// switch case begins
    {
        case 1:
            printf("Enter elements of matrix 1");//first case
            for(i=0;i<m;i++)// accepting elements of the matrix 1
            {
                for(j=0;j<n;j++)
                {
                    scanf("%d",&arr[i][j]);
                }
            }
            printf("Enter elements of matrix 2");// accepting elements of the matrix 2
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    scanf("%d",&arr1[i][j]);
                }
            }
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    op[i][j] = arr1[i][j]+arr[i][j];// addition operation
                }
            }
            printf("sum:\n");
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    printf("%d \t",op[i][j]);//printing the sum
                }
                printf("\n");
                printf("\n");
            }
            
            
            break;
            
        case 2:
            printf("Enter elements of matrix 1");// accepting elements of the matrix 1
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    scanf("%d",&arr[i][j]);
                }
            }
            printf("Enter elements of matrix 2");// accepting elements of the matrix 2
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    scanf("%d",&arr1[i][j]);
                }
            }
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    for(s=0;s<n;s++)
                    {
                        op[i][j] = op[i][j]+(arr[i][s]*arr1[s][j]);//multiplication of the two matrices
                    }
                }
            }
            printf("Multiplication \n");//printing the product
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    printf("%d \t",op[i][j]);
                }
                printf("\n");
                printf("\n");
            }
            break;
            
            
        case 3:
            printf("Enter elements of matrix");//accepting values
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    scanf("%d",&arr[i][j]);
                }
            }
            
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    op[i][j] = arr[j][i];// transpose
                    
                }
            }
            printf("Matrix: \n");
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    printf("%d \t",arr[i][j]);
                }
                printf("\n");
                printf("\n");
            }
            
            printf("Transpose:\n");//printing the matrix
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    printf("%d \t",op[i][j]);
                }
                printf("\n");
                printf("\n");
            }
            break;
            
        default :   printf("error");
            break;
    }//switch
    return 0;
}//main
	 

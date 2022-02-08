#include<stdio.h>
int main()
{
    char arr[50][50];
    int i,j,k, row, col;

    printf("Enter the row: \n");
    scanf("%d",&row);

    printf("Enter the column: \n");
    scanf("%d",&col);


    printf("Enter the matrix:");
    for (i=0;i<row;i++){
        for(j=0;j<col;j++){

                        scanf("%d ",&arr[i][j]);




        }

    }
    printf("The matrix of GR:\n");
   for (i=0;i<row;i++){
        for(j=0;j<col;j++){
                for(k=0;k<col;k++){
                    printf("%d ",arr[i][j]);

                }
                printf("\n");

        }

    }
    return 0;
}

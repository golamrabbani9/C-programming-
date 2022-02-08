#include<stdio.h>
int main()
{
    int arr[100][100];
    int row,col,i,j;
    printf("Enter the row and column");
    scanf("%d %d",&row,&col);
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

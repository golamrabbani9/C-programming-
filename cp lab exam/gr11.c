#include<stdio.h>
int main()
{
    int i,j,row,col,space;
    printf("Enter the row: ");
    scanf("%d",&row);

    for(i=1;i<=row;i++){
        for(space=1;space<=row-i;space++){
            printf(" ");

        }
        for(j=1;j<row;j++){
            printf("*");

        }
        printf("\n");
        }
    return 0;

    }


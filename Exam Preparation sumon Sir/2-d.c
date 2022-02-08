#include<stdio.h>
int main()
{
    int i,j,r,c,a[10][10];
    printf("How many rows: ");
    scanf("%d",&r);

    printf("How many columns: ");
    scanf("%d",&c);

    //scan matrix
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d ",&a[i][j]);
        }
    }
    //print matrix
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
            printf("%4d",a[i][j]);

        printf("\n");

    }
    return 0;
}

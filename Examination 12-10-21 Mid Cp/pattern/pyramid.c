#include<stdio.h>
int main()
{
    int i,j,space,rows;
    printf("Enter the Numbers of rows: ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        for(space=1;space<=rows-1;space++){
            printf("  ");

        }
        for (j=1;j<2*i-1 ;j++ ){
            printf("* ",rows);
        }

        printf("\n");
    }
    return 0;
}

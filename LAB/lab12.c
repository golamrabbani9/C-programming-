#include<stdio.h>
int main()
{
    int i,j,space,rows;
    printf("Enter the numbers of rows: ");
    scanf("%d",&rows);
    for (i=rows-1;i>=1 ;i-- ){
        for (space=1;space<=rows-i ;space++ ){
            printf(" ");
        }
        for (j=1;j<=2*i-1 ;j++){
            printf("%c",j+96);
        }
        printf("\n");
    }

    return 0;
}



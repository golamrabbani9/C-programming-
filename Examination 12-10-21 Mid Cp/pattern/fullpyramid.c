#include<stdio.h>
int main()
{
    int i,j,rows,space;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        for(space=1;space<=rows-i;space++){
                printf("  ");

        }
        for(j=0;j<2*i-1;j++){
            printf("* ",rows);
        }
        printf("\n");
    }
     for(i=rows-1;i>=1;i--){
        for(space=1;space<=rows-i;space++){
                printf("  ");

        }
        for(j=0;j<2*i-1;j++){
            printf("* ",rows);
        }
        printf("\n");
    }


    return 0;
}

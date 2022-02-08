//Aniv vai pattern lecture 6-9
#include<stdio.h>
int main()
{
    int row,col,space,n;
    int  count=1;
    printf("Enter line: ");
    scanf("%d",&n);
    for(row=1;row<=n;row++){
        for(col=1;col<=n-row;col++){
            printf(" ");
        }
        for(col=1;col<=2*row-1;col++){
            printf("%d",col);
        }
        printf("\n");
    }
    for(row=n-1;row>=1;row--){
        for(col=1;col<=n-row;col++){
            printf(" ");
        }
        for(col=1;col<=row;col++){
            printf("*",col);
        }
        printf("\n");
    }

    return 0;
}

#include<stdio.h>
int main()
{
    int i,j;
    int A[3][2]={
        {4,7},
        {8,6},
        {78,78}};
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            scanf("%d\t",A[i][j]);
        }
        printf("\n");
    }
     for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
    return 0;
}

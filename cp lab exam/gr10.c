#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the rows: ");
    scanf("%d",&n);

    for(i=n;i>=0;i--){
        for(j=0;j<i;j++){
            printf("%c",i+64);
        }
        printf("\n");
    }
    return 0;
}

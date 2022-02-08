#include<stdio.h>
int main()
{
    int factor,i;
    printf("Enter the number:");
    scanf("%d",&factor);
    for(i=1;i<=factor/2;i++){
        if(factor%i==0){
            printf("%d ",i);
        }
    }
    printf("%d ",factor);

    return 0;
}

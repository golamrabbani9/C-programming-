#include<stdio.h>
int main()
{
    int i,number;
    printf("Enter an integer number:");
    scanf("%d",&number);
    printf("The factors of %d: ",number);
    for (i=1;i<=number/2;i++ ){
        if (number%i==0){
            printf("%d ",i);
        }
    }
    printf("%d",number);

    return 0;
}

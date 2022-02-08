#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter the number:");
    scanf("%d",&num);

    printf("The factors of %d: ",num);
    for(i=1;i<=num/2;i++){
        if(num%i==0){
            printf("%d ",i);
        }
    }
    printf("%d",num);
    return 0;
}

#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);
    if(num1==num2){
        printf("The two numbers are equal.");
    }
    else{
        printf("The two numbers are not equal.");
    }
    return 0;
}


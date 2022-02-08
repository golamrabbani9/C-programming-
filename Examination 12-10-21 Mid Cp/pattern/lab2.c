#include<stdio.h>
int main()
{
    int num;
    printf("Enter a numbers: ");
    scanf("%d",&num);
    /*if(num1==num2){
        printf("The two numbers are equal.");
    }
    else{
        printf("The two numbers are not equal.");
    }
    */
    num%2==0 && num!=0 ? "even number" : "odd number";
    return 0;
}

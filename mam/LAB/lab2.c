#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    number%2==0 && number!=0 ? printf("Even Number") : number==0 ? printf("Zero"): printf("Odd number");
    return 0;
}

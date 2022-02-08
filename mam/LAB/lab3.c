#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    number>0 ? printf("Positive number "): number==0 ? printf("zero"): printf("Negative Number");
    return 0;
}

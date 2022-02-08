#include<stdio.h>
int main()
{
    int i,n,sumOdd=0,sumEven=0;
    printf("Enter the terms: ");
    scanf("%d",&n);
    printf("Even Number: \n");
    for (i=2;i<=n ;i +=2 ){
        printf("%d\n\n",i);
        sumEven=sumEven+i;

    }
    printf("The sumition of even number: %d\n ",sumEven);
    printf("Odd Number: \n");
    for (i=1;i<=n ;i +=2 ){
        printf("%d\n\n",i);
        sumOdd=sumOdd+i;

    }
    printf("The sumition of  even number: %d\n ",sumOdd);


    return 0;
}


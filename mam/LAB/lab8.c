#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the terms: ");
    scanf("%d",&n);
    for (i=1;i<=n ;i++ ){
        printf("the square of %d is %d and cube is %d\n",i,i*i,i*i*i);
    }

    return 0;
}



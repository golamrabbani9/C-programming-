#include<stdio.h>
int main()
{
    int i,num;
    printf("Enter two numbers: ");
    scanf("%d %d",&num,&i);

    printf("right shift by %d : %d\n ",i,num>>i);

    return 0;
}


#include<stdio.h>
int main()
{
    int i,num;
    printf("Enter two numbers: ");
    scanf("%d %d",&num,&i);

    printf("left shift by %d : %d\n ",i,num<<i);

    return 0;
}

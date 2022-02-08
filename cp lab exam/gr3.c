#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter two numbers: ");
    scanf("%d %d",&x,&y);

    add(&x,&y);
    return 0;
}
int add(int *p,int *q){
    int result=*p+*q;
    printf("Sum by reference %d",result);

}

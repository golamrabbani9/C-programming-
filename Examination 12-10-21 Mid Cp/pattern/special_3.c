#include<stdio.h>
int main()
{
    int base,exp,result=1;
    int i;
    printf("Enter the base and exponential: ");
    scanf("%d %d",&base,&exp);
    for(i=1;i<=exp;i++){
        result=result*base;
    }
    printf("The result: %d",result);
    return 0;
}

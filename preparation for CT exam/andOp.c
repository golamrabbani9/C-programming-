#include<stdio.h>
int main()
{
    int x,y,output;
    printf("Enter two number:");
    scanf("%d %d",&x ,&y);
    output=x&y;
    printf("Output = %d",output);
    return 0;
}

#include<stdio.h>
int main()
{
    int x=10;
    int y=3;
    int *p1,*p2;
    p1=&x;
    p2=&y;
    int result=*p1+*p2;
    printf("The result using two pointers p1 and p2 is %d",result);


    return 0;
}

#include<stdio.h>
int main()
{
    int x=10;
    if(x==10){
        int x=99;
        printf("Inner x: %d\n",x);
    }
    printf("Outer X:%d",x);
    return 0;
}


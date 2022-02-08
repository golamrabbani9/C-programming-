#include<stdio.h>
int main()
{
    int x=7;
    char ch='h';
    float f=6.89;
    ch=x;
    x=f;
    f=ch;
    f=x;
    printf("%d\n",ch);
    printf("%d\n",x);
    printf("%f",f);
    return  0;
}

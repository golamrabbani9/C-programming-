#include<stdio.h>
int main()
{
    int n=6;
    int i;
    int fact=1;

    for(i=1;i<=n;i++){
        fact=fact*i;

    }
    printf("%d",fact);
    return 0;
}

#include<stdio.h>
int main()
{
    int *p,sample[10]={1,5,7,2,8,2,7,2};
    p=sample;
    printf("%d\n%d",&sample[2],&sample[0]);

    return 0;
}

#include<stdio.h>
int main()
{
    int x,i,z;
    for(x=100;x!=65;x-=5){
        z=x*x;
        printf("The square of %d, %d\n",x,z);
    }
    return 0;
}

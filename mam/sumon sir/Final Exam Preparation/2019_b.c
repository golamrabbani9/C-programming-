#include<stdio.h>
int main()
{
    int sum=0;
    for(int i=0;i<=12;i++){
        if(i>2 && i<8)
            continue;
        sum=sum+i;
        printf("sum %d is %d\n",i,sum);

    }

    return 0;
}
//3+4+5+6+7+8=
//1+2+9+8+10+11+12=45

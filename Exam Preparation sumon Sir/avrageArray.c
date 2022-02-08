#include<stdio.h>
int main()
{
    int i;
    float sum=0;
    float str[2]={2,5};
    for(i=0;i<2;i++){
        sum=sum+str[i];
    }
    printf("The avarage Is= %d", sum);
    return 0;
}

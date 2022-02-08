#include<stdio.h>
int main()
{
    int num[4]={5,9,2,10};
    int max=num[0];
    for(int i=0;i<=5;i++){
        if(max<num[i]){
            max=num[i];
        }
    }
    printf("%d",max);
    return 0;
}
